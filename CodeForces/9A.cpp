#include <bits/stdc++.h>

using namespace std;

void probability(int n) {
	switch (n) {
	case 0: cout << "0/1" << endl;
		break;
	case 1: cout << "1/6" << endl;
		break;
	case 2: cout << "1/3" << endl;
		break;
	case 3: cout << "1/2" << endl;
		break;
	case 4: cout << "2/3" << endl;
		break;
	case 5: cout << "5/6" << endl;
		break;
	case 6: cout << "1/1" << endl;
		break;
	}
}

int main() {
	int x, y, z;
	cin >> x >> y;
	z = max(x, y);
	z = (6 - z) + 1;

	probability(z);

	return 0;
}