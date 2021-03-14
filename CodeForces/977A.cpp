#include <bits/stdc++.h>

int main() {
	long long n, k; 
	// n = given number, k = number of times of the subtraction

	std::cin >> n >> k;

	while (k--) {
		if (n % 10 == 0)
			n /= 10;
		else
			n--;
	}

	std::cout << n << "\n";

	return 0;
}