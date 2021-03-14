#include <iostream>
#include <cstring>

using namespace std;

void out(char in[101]) {
	int s_count = 0, c_count = 0;
	int l = strlen(in);

	for (int i = 0; i < l; i++) {
		if ((int)in[i] > 64 && (int)in[i] < 91)
			c_count++;
		else if ((int)in[i] > 96 && (int)in[i] < 123)
			s_count++;
	}

	if (c_count > s_count)
		cout << _strupr(in) << "\n";
	else
		cout << _strlwr(in) << "\n";
}

int main() {
	char txt[101];
	cin >> txt;

	out(txt);

	return 0;
}