import pandas as pd


def find_products(products: pd.DataFrame) -> pd.DataFrame:
    return pd.DataFrame(
        products.query("recyclable == 'Y' & low_fats == 'Y' ")["product_id"]
    )
