#include <bits/stdc++.h>

using namespace std;

void modulo(long long a, long long b, long long c) {
	long long res;

	if (c - c % a + b <= c) {
		cout << c - c % a + b << endl;
	}
	else {
		cout << c - c % a - (a - b) << endl;
	}
}

int main() {
	int testCase;
	cin >> testCase;
	long long x, y, n;

	for (int loop = 1; loop <= testCase; loop++) {
		cin >> x >> y >> n;
		modulo(x, y, n);
	}

	return 0;
}