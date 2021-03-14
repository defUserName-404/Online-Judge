#include <stdio.h>

void LCM(long long int m, long long int n){
	long long int i, lcm = 1;

	for (i = 2; i <= m && i <= n; i++) {
		while (m % i == 0 && n % i == 0) {
			m /= i;
			n /= i;
			lcm *= i;
		}
	}

	lcm = lcm * m * n;

	printf("LCM = %lld\n", lcm);
}

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--) {
		long long int a, b;
	
		scanf("%lld %lld", &a, &b);

		LCM(a, b);
	}

	return 0;
}