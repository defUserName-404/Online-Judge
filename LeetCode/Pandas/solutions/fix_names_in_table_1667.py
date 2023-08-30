import pandas as pd


def fix_names(users: pd.DataFrame) -> pd.DataFrame:
    users["name"] = users["name"].apply(lambda s: str.capitalize(s))
    return users.sort_values("user_id")
