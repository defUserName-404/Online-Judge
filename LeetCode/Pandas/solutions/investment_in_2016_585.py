import pandas as pd


def find_investments(insurance: pd.DataFrame) -> pd.DataFrame:
    insurance_same_as_2015 = insurance.groupby(by="tiv_2015").filter(
        lambda x: len(x) > 1
    )
    insurance_in_unique_cities = insurance.groupby(["lat", "lon"]).filter(
        lambda x: len(x) == 1
    )
    insurance_result = insurance_same_as_2015.merge(
        insurance_in_unique_cities, how="right", on="pid"
    )

    return pd.DataFrame(
        data=insurance_result[["tiv_2016_x"]].sum().round(2), columns=["tiv_2016"]
    )
