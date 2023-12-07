import pandas as pd


def test():
    data = [[1, 1], [2, 2], [3, 3], [4, 3]]
    orders = pd.DataFrame(data, columns=["order_number", "customer_number"]).astype(
        {"order_number": "Int64", "customer_number": "Int64"}
    )
    print(orders.groupby("customer_number").size().idxmax())
    print(orders.groupby("customer_number").size().nlargest(n=1))


if __name__ == "__main__":
    test()
