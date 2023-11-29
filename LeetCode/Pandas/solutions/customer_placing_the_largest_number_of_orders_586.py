import pandas as pd


def largest_orders(orders: pd.DataFrame) -> pd.DataFrame:
    return pd.DataFrame(
        {
            "customer_number": []
            if orders.empty
            else [orders.groupby("customer_number").size().idxmax()]
        }
    )
