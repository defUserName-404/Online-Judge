import pandas as pd

from solutions.consecutive_number_180 import consecutive_numbers


def test():
	data = [[1, 1], [2, 1], [3, 1], [4, 2], [5, 1], [6, 2], [7, 2]]
	logs = pd.DataFrame(data, columns=["id", "num"]).astype(
			{"id": "Int64", "num": "Int64"}
	)
	print(consecutive_numbers(logs))


if __name__ == "__main__":
	test()
