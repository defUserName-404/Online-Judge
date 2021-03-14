#include <iostream>
#include <cstring>

using namespace std;

void out(char in1[101], char in2[101]) {
	int d;
	d = strcmp(in1, _strrev(in2));

	if (d == 0) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	char txt1[101], txt2[101];

	cin >> txt1 >> txt2;

	out(txt1, txt2);

	return 0;
}