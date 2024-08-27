import pandas as pd


def latest_login(logins: pd.DataFrame) -> pd.DataFrame:
    return (
        logins[logins["time_stamp"].dt.year == 2020]
        .groupby("user_id", as_index=False)["time_stamp"]
        .max()
        .rename(columns={"time_stamp": "last_stamp"})
    )
