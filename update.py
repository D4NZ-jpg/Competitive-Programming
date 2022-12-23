import re, requests, json, subprocess, re, os
from Crypto.Cipher import AES
from datetime import datetime
from dotenv import load_dotenv


class Scraper:
    def __init__(self) -> None:
        user_agent = "Mozilla/5.0 AppleWebKit/537.36 Chrome/102.0.4972.0 Safari/537.36"
        home_page = "https://codeforces.com"

        self.session = requests.Session()
        self.session.headers.update({"User-Agent": user_agent})
        r = self.session.get(home_page)
        r.raise_for_status()
        html = r.text
        if "/aes.min.js" in html:
            rcpc = self.get_rcpc(html)
            self.session.cookies.set("RCPC", rcpc, domain="codeforces.com", path="/")
            r = self.session.get(home_page)
            r.raise_for_status()
            html = r.text

        csrf = re.search('name="X-Csrf-Token" content="([0-9a-f]+)"', html).group(1)
        self.session.headers.update({"X-Csrf-Token": csrf})

    def get_rcpc(html):
        def getvar(var):
            return bytes.fromhex(
                re.search(var + '=toNumbers\("([0-9a-f]+)"\)', html).group(1)
            )

        key, iv, ciphertext = getvar("a"), getvar("b"), getvar("c")
        return AES.new(key, AES.MODE_CBC, iv=iv).decrypt(ciphertext).hex()

    def getSubmission(self, id):
        return json.loads(
            self.session.post(
                "https://codeforces.com/data/submitSource",
                data={"submissionId": str(id)},
            ).text
        )


def formatCode(code) -> str:
    p = subprocess.Popen(
        "clang-format -style=file",
        stdout=subprocess.PIPE,
        stdin=subprocess.PIPE,
        shell=True,
    )
    formatted, _ = p.communicate(input=code.encode())
    return formatted.decode().replace("\r\n", "\n")


def addHeaders(code, data, submission) -> str:
    # if already includes headers, add them
    headers = {
        i.split(":")[0].replace("// ", ""): ":".join(i.split(":")[1:])
        for i in re.findall(r"(?=//)(.*?)(?=\r\n)", code)
    }

    if not "Problem" in headers:
        headers["Problem"] = (
            submission["problem"]["index"] + ". " + submission["problem"]["name"]
        )

    if not "Contest" in headers:
        headers["Contest"] = data["contestName"]

    if not "URL" in headers:
        headers["URL"] = (
            "https://codeforces.com/contest/"
            + str(submission["problem"]["contestId"])
            + "/problem/"
            + str(submission["problem"]["index"])
        )

    if "Start" in headers:
        format = "%d-%m-%Y %H:%M:%S"
        start = datetime.strptime(headers["Start"].strip(), format)
        headers["End"] = datetime.fromtimestamp(
            submission["creationTimeSeconds"]
        ).strftime(format)
        headers["Duration"] = (
            datetime.fromtimestamp(submission["creationTimeSeconds"]) - start
        )

    if headers["Problem"].strip() == "A. Jamie and Alarm Snooze":
        pass

    try:
        headers["Rating"] = submission["problem"]["rating"]
    except:
        pass

    code = code.replace(re.findall(r"^[\s\S]*(?=#include)", code)[0], "")

    code = (
        "\n".join(
            [
                f"// {key}: {str(value).strip()}"
                for key, value in headers.items()
                if key
                in [
                    "Problem",
                    "Contest",
                    "URL",
                    "Memory Limit",
                    "Time Limit",
                    "Start",
                    "End",
                    "Duration",
                    "Rating",
                ]
            ]
        )
        + "\n\n"
        + code
    )
    return code


if __name__ == "__main__":
    load_dotenv()
    # Get all submissions with an OK verdict
    submissions = [
        s
        for s in json.loads(
            requests.get(
                f"https://codeforces.com/api/user.status?handle={os.getenv('USER')}"
            ).text
        )["result"]
        if s["verdict"] == "OK"
    ]

    scraper = Scraper()

    # format code
    for submission in submissions:
        data = scraper.getSubmission(submission["id"])

        # remove any invalide characters from problem name
        for char in data["problemName"]:
            if char in '<>:"/\|?*':
                data["problemName"] = data["problemName"].replace(char, "")

        with open("./Archive/" + data["problemName"] + ".cpp", "w") as f:
            # Prepare headers with problem info
            data["source"] = addHeaders(data["source"], data, submission)

            # Format code and write to file
            f.write(formatCode(data["source"]))
