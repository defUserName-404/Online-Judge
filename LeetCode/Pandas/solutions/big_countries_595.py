import pandas as pd


def is_big_country(country: pd.Series) -> bool:
    return country["area"] >= 3000000 or country["population"] >= 25000000


def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    if world.empty:
        return pd.DataFrame(columns=["name", "population", "area"])
    return world[world.apply(is_big_country, axis=1)][["name", "population", "area"]]
