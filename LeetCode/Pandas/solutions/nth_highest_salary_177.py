import pandas as pd


def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    unique_sorted_salaries = sorted(employee["salary"].unique())
    column_name = f"getNthHighestSalary({N})"
    return pd.DataFrame(
            {
                    column_name: [
                            unique_sorted_salaries[-N] if len(unique_sorted_salaries) >= N else None
                    ]
            }
    )
