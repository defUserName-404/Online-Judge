#include <iostream>

using namespace std;

int main() {
	int n, problem[3];
	int count = 0, solve = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++)
			cin >> problem[j];
		    count = 0;

			for (int j = 0; j < 3; j++) {
			if (problem[j] == 1) count++;
		}
		if (count > 1) solve++;
	}

	cout << solve << endl;


	return 0;
}