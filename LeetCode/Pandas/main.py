import pandas as pd

from solutions.combine_two_tables_175 import combine_two_tables


def test():
	data = [[1, 'Wang', 'Allen'], [2, 'Alice', 'Bob']]
	person = pd.DataFrame(data, columns=['personId', 'firstName', 'lastName']).astype(
		{'personId': 'Int64', 'firstName': 'object', 'lastName': 'object'})
	data = [[1, 2, 'New York City', 'New York'], [2, 3, 'Leetcode', 'California']]
	address = pd.DataFrame(data, columns=['addressId', 'personId', 'city', 'state']).astype(
		{'addressId': 'Int64', 'personId': 'Int64', 'city': 'object', 'state': 'object'})
	name_with_address = combine_two_tables(person, address)
	print(name_with_address)


if __name__ == '__main__':
	test()
