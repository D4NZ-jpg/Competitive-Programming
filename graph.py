import matplotlib.pyplot as plt
from matplotlib import dates, ticker
from dotenv import dotenv_values
from Scraper import Codeforces

groups = [
    (800, 1100),
    (1200, 1300),
    (1400, 1500),
    (1600, 1800),
    (1900, 2000),
    (2100, 2200),
    (2300, 2300),
    (2400, 2500),
    (2600, 2900),
    (3000, 3500),
]

colors = [
    "#cccccc",
    "#77ff77",
    "#84e0c2",
    "#b2b2ff",
    "#ff94ff",
    "#ffd194",
    "#ffc266",
    "#ff8484",
    "#ff4747",
    "#b21919",
]

labels = [
    "800-1100",
    "1200-1300",
    "1400-1500",
    "1600-1800",
    "1900-2000",
    "2100-2200",
    "2300",
    "2400-2500",
    "2600-2900",
    "3000-3500",
]


def format_date(x, pos=None):
    date = dates.num2date(x)
    if date.month == 1:
        return f"{date:%Y}"
    else:
        return f"{date:%B}"


def categorize_submission(submission, groups):
    rating = submission.problem.rating
    for range_start, range_end in groups:
        if range_start <= rating <= range_end:
            return (range_start, range_end)
    return None


def create_series(submissions, groups):
    counts = [0] * len(groups)
    total = [counts[:]]

    for submission in submissions:
        rating = submission.problem.rating

        for i, (range_start, range_end) in enumerate(groups):
            if range_start <= rating < range_end:
                counts[i] += 1
                break
        total.append(counts[:])

    series = []
    for i in range(len(groups)):
        new = []
        for j in total:
            new.append(j[i])
        series.append(new)

    return series


def stackedProblems(problems):
    y = create_series(problems, groups)
    x = [sub.submitTime for sub in problems]
    x.append(x[-1])
    plt.stackplot(x, y, labels=labels, colors=colors, alpha=0.6)
    plt.legend(loc="upper left")

    plt.xticks(rotation=65)
    # Format the dates on the x-axis
    ax = plt.gca()  # Get current axis
    # Place a tick at each month
    ax.xaxis.set_major_locator(dates.MonthLocator())
    ax.xaxis.set_major_formatter(
        ticker.FuncFormatter(format_date)
    )  # Custom format for the tick labels

    # Optionally, use a minor locator for years
    ax.xaxis.set_minor_locator(dates.YearLocator())
    ax.xaxis.set_minor_formatter(dates.DateFormatter("\n%Y"))

    plt.gcf().autofmt_xdate()  # Auto-format the date labels
    plt.xticks(rotation=45)

    plt.savefig("img/problems.png")


def updateAll():
    # Download problems
    handle = dotenv_values(".env")["HANDLE"]
    cf = Codeforces(handle)

    # Filter for only the ones with rating
    problems = [
        submission
        for submission in cf.getSubmissionList()
        if submission.problem.rating is not None
    ]

    problems = sorted(problems, key=lambda x: x.submitTime)

    stackedProblems(problems)
