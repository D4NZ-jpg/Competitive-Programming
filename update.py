import re, requests, json, subprocess, re, os
from bs4 import BeautifulSoup as bs
from datetime import datetime
from dotenv import dotenv_values

def getSubmission(contest, id) -> str:
    res = requests.get(f"https://codeforces.com/contest/{contest}/submission/{id}").content
    page = bs(res, "html.parser")

    return page.find(id="program-source-text").text

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
    user = dotenv_values(".env")["USER"]

    # Get all submissions with an OK verdict
    submissions = [
        s
        for s in json.loads(
            requests.get(
                f"https://codeforces.com/api/user.status?handle={user}"
            ).text
        )["result"]
        if s["verdict"] == "OK"
    ]

    lock = []

    if os.path.isfile('lock.json'):
        with open('lock.json', 'r') as f:
            lock = json.load(f)

    # format code
    for submission in submissions:
        if(submission["id"] in lock):
            continue

        data = {}
        data["source"] = getSubmission(submission["contestId"], submission["id"])
        data["problemName"] = f"({submission['problem']['index']}) {submission['problem']['name']}"
        data["contestName"] = json.loads(
            requests.get(
                f"https://codeforces.com/api/contest.standings?contestId={submission['problem']['contestId']}"
            ).text
        )["result"]["contest"]["name"]

        # remove any invalide characters from problem name
        for char in data["problemName"]:
            if char in '<>:"/\|?*':
                data["problemName"] = data["problemName"].replace(char, "")

        with open("./Archive/" + data["problemName"] + ".cpp", "w") as f:
            # Prepare headers with problem info
            data["source"] = addHeaders(data["source"], data, submission)

            # Format code and write to file
            f.write(formatCode(data["source"]))

            # Add id to lock
            lock.append(submission["id"])

    
    with open('lock.json', 'w') as f:
        f.write(json.dumps(lock))
