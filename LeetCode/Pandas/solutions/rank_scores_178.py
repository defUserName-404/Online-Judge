import pandas as pd


def order_scores(scores: pd.DataFrame) -> pd.DataFrame:
    return (
        pd.DataFrame(scores)
        .assign(rank=lambda x: x["score"].rank(ascending=False, method="dense"))
        .sort_values(by="rank")[["score", "rank"]]
    )
