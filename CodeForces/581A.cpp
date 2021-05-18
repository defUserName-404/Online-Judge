#include <bits/stdc++.h>

using namespace std;

void socks(int a, int b)
{
    if (a > b)
        cout << b << " " << ((a - b) / 2) << endl;
    else if (a < b)
        cout << a << " " << ((b - a) / 2) << endl;
    else // a == b
        cout << a /*or b*/ << " 0" << endl;
}

int main()
{
    int red, blue;
    cin >> red >> blue;

    socks(red, blue);

    return 0;
}