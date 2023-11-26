import pandas as pd

from solutions.rank_scores_178 import order_scores


def test():
    data = [[1, 3.5], [2, 3.65], [3, 4.0], [4, 3.85], [5, 4.0], [6, 3.65]]
    scores = pd.DataFrame(data, columns=["id", "score"]).astype(
        {"id": "Int64", "score": "Float64"}
    )
    print(order_scores(scores))


if __name__ == "__main__":
    test()
