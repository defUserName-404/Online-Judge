import pandas as pd


def game_analysis(activity: pd.DataFrame) -> pd.DataFrame:
    return (
        activity.loc[
            pd.DataFrame(activity).groupby("player_id")["event_date"].idxmin()
        ].rename(columns={"player_id": "player_id", "event_date": "first_login"})
    )[["player_id", "first_login"]]
