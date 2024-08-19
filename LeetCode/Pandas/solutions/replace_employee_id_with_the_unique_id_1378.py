import pandas as pd


def replace_employee_id(
    employees: pd.DataFrame, employee_uni: pd.DataFrame
) -> pd.DataFrame:
    return employees.join(employee_uni.set_index("id"), on="id", how="left")[
        ["unique_id", "name"]
    ]
