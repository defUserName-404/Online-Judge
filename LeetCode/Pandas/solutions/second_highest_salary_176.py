import pandas as pd


def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    unique_sorted_salaries = sorted(employee["salary"].unique())
    return pd.DataFrame(
            {
                    "SecondHighestSalary": [
                            unique_sorted_salaries[-2] if len(unique_sorted_salaries) > 1 else None
                    ]
            }
    )
