#include <iostream>

using namespace std;

int main() {
	int cost, money, n; //value = cost of each item, money = amount he took it for shopping, n = item he bought
	cin >> cost >> money >> n;
	int total = 0, money_needed;

	for (int i = 1; i <= n; i++)
		total += (i * cost);

	money_needed = total - money;

	if (money_needed > 0)
		cout << money_needed << endl;
	else
		cout << "0" << endl;

	return 0;
}
