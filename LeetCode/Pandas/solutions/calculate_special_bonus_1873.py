import pandas as pd


def is_applicable_for_bonus(employee: pd.Series) -> bool:
    return (employee["employee_id"] % 2 != 0) and (
            not str(employee["name"]).startswith("M")
    )


def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    employees["bonus"] = (
            employees.apply(is_applicable_for_bonus, axis=1).astype(int)
            * employees["salary"]
    )
    return employees[["employee_id", "bonus"]].sort_values(by="employee_id")
