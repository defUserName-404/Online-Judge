import pandas as pd

"""
! The solution was slow, we can copy the dataframe in place instead
"""


# def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
#     return employees.assign(bonus=lambda employee: employee["salary"] * 2)


def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees["bonus"] = employees["salary"] * 2
    return employees
