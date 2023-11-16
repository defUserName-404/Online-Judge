import pandas as pd


def employee_bonus(employee: pd.DataFrame, bonus: pd.DataFrame) -> pd.DataFrame:
    return pd.merge(employee, bonus, on="empId", how="left").query(
        "(bonus < 1000) or bonus.isna()"
    )[["name", "bonus"]]
