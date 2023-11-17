import pandas as pd

from solutions.employee_bonus_577 import employee_bonus


data = [
    [1, 2, "2016-03-01", 5],
    [1, 2, "2016-05-02", 6],
    [2, 3, "2017-06-25", 1],
    [3, 1, "2016-03-02", 0],
    [3, 4, "2018-07-03", 5],
]
activity = pd.DataFrame(
    data, columns=["player_id", "device_id", "event_date", "games_played"]
).astype(
    {
        "player_id": "Int64",
        "device_id": "Int64",
        "event_date": "datetime64[ns]",
        "games_played": "Int64",
    }
)


def test():
    data = [
        [3, "Brad", None, 4000],
        [1, "John", 3, 1000],
        [2, "Dan", 3, 2000],
        [4, "Thomas", 3, 4000],
    ]
    employee = pd.DataFrame(
        data, columns=["empId", "name", "supervisor", "salary"]
    ).astype(
        {"empId": "Int64", "name": "object", "supervisor": "Int64", "salary": "Int64"}
    )
    data = [[2, 500], [4, 2000]]
    bonus = pd.DataFrame(data, columns=["empId", "bonus"]).astype(
        {"empId": "Int64", "bonus": "Int64"}
    )
    print(employee_bonus(employee, bonus))


if __name__ == "__main__":
    test()
