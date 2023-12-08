import pandas as pd


def consecutive_numbers(logs: pd.DataFrame) -> pd.DataFrame:
    result_data: set[int] = set()
    n: int = len(logs)

    def find_val_at_idx(index: int) -> int:
        return logs.at[index, "num"]

    i: int = 1
    while i < n:
        count: int = 1
        while find_val_at_idx(i) == find_val_at_idx(i - 1):
            count += 1
            i += 1
            if count == 3:
                result_data.add(find_val_at_idx(i - 1))
                break
        i += 1

    return pd.DataFrame(data=result_data, columns=["ConsecutiveNums"])
