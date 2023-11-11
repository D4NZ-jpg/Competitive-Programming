from bs4 import BeautifulSoup as bs
from requests import get
from datetime import datetime
import re, subprocess

class Problem:
    def __init__(self, data):
        self.name = data["name"]
        self.tags = data["tags"]
        self.index = data["index"]

        # This properties can be abscent
        self.contestId = data.get("contestId")
        self.rating = data.get("rating")
 
class Submission:
    code = None
    metadata = None

    def __init__(self, data):
        self.id = data["id"]
        self.submitTime = datetime.fromtimestamp(data["creationTimeSeconds"])
        self.language = data["programmingLanguage"]
        self.testset = data["testset"]
        self.passedTests = data["passedTestCount"]
        self.timeConsumed = data["timeConsumedMillis"] # in milliseconds
        self.memoryConsumed = data["memoryConsumedBytes"] # in bytes

        self.problem = Problem(data["problem"])

        # This properties can be abscent
        self.contestId = data.get("contestId")
        self.verdict = data.get("verdict", "REJECTED")


    def extractMetadata(self):
        matches = re.findall(r"/{2}\s*(.*?)\:\s*/*\s*(.*)\n", self.getCode())
        metadata = {key: val for key, val in matches}

        # If start time is present, calculate duration
        if("Start" in metadata):
            start = datetime.strptime(metadata["Start"].strip(" \t\r\n"), "%d-%m-%Y %H:%M:%S")
            self.duration = self.submitTime - start
        else:
            self.duration = None

        metadata["Duration"] = self.duration
        metadata["End"] = self.submitTime

        # Get rating
        metadata["Rating"] = self.problem.rating  
        metadata["URL"] = f"https://codeforces.com/problemset/problem/{self.contestId}/{self.problem.index}"
        self.metadata = metadata

    def writeHeaders(self):
        code = re.search(r"#include.*(?=$)", self.code, re.DOTALL).group()

        headers = "\n".join(f"// {key}: {self.metadata[key]}" for key in self.metadata)

        self.code = '\n'.join([headers, code])

    def formatCode(self):
        p = subprocess.Popen(
            "clang-format -style=file",
            stdout=subprocess.PIPE,
            stdin=subprocess.PIPE,
            shell=True,
        )
        formatted, _ = p.communicate(input=str(self.code).encode())
        self.code = formatted.decode().replace("\r\n", "\n")
        return self.code


        
    def getCode(self):
        if self.code:
            return self.code

        if not self.contestId:
            return False
                   #https://codeforces.com/contest/1201/submission/224791649
        res = get(f"https://codeforces.com/contest/{self.contestId}/submission/{self.id}").content
        page = bs(res, "html.parser")
        code = page.find(id="program-source-text").text
        
        assert type(code) is str, f"Error grabbing code for https://codeforces.com/contest/{self.contestId}/submission/{self.id}"

        self.code = code
        return self.code



class Codeforces:
    def __init__(self, handle):
        self.handle = handle

    def getSubmissionList(self, all = False):
        response = get(f"https://codeforces.com/api/user.status?handle={self.handle}").json()
        assert  response["status"] == "OK", "Error while getting submission list"

        return [ Submission(sub) for sub in response["result"] if sub.get("verdict", "REJECTED") == "OK" or all]
