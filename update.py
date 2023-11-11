from Scraper import Codeforces
from dotenv import dotenv_values
from time import sleep
import json, os, re


def sanitizeFilename(filename):
    forbidden_chars = r'[\\/:*?"<>|\r\n]+'
    sanitized = re.sub(forbidden_chars, '', filename)
    return sanitized

class FileManager:
    def __init__(self, lockFilePath):
        self.lockFilePath = lockFilePath
        self.lockData = self.loadLockData()

    def loadLockData(self):
        if not os.path.exists(self.lockFilePath):
            with open(self.lockFilePath, 'w') as lockFile:
                json.dump({}, lockFile)

        with open(self.lockFilePath, 'r') as lockFile:
            return json.load(lockFile)

    def writeFile(self, submission):
        code = submission.getCode()
        filePath = f"./Archive/({submission.problem.index}) {sanitizeFilename(submission.problem.name)}.cpp"
        with open(filePath, 'w') as file:
            file.write(code)

        self.updateLockFile(submission)

    def updateLockFile(self, submission):
        submissionId = str(submission.id)

        durationInSeconds = None
        if submission.duration:
            durationInSeconds = submission.duration.total_seconds()

        submitTimeEpoch = int(submission.submitTime.timestamp())
        rating = submission.problem.rating

        self.lockData[submissionId] = {
            'duration': durationInSeconds,
            'submitTime': submitTimeEpoch,
            'rating': rating
        }

        with open(self.lockFilePath, 'w') as lockFile:
            json.dump(self.lockData, lockFile, indent=4)

# Download everything
handle = dotenv_values(".env")["HANDLE"]
fm = FileManager("./lock.json")
cf = Codeforces(handle)

# For things like gym submissions
contestExclude = [102951]

submissions = cf.getSubmissionList()
submissions = [sub for sub in submissions if (not str(sub.id) in fm.lockData or fm.lockData[str(sub.id)]["rating"] is None) and not sub.contestId in contestExclude]
for i, sub in enumerate(submissions): 
    print(f"{i}/{len(submissions)}")
    sub.getCode()

    sub.extractMetadata()
    sub.writeHeaders()

    fm.writeFile(sub)
    
    # Prevent getting call limit
    sleep(2)

print(f"{len(submissions)}/{len(submissions)}")

# Update graphs
