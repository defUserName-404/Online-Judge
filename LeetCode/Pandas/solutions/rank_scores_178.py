import pandas as pd


def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(scores).sort_values(by="score", ascending=False)
    df["rank"] = df["score"].rank(ascending=False, method="dense")
    return df[["score", "rank"]]
