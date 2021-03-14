#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string pos;
    cin >> pos;

    char c = pos[0];
    char r = pos[1];

    int flag = 0;
    // when the king is at one of the four corners of the board (c = a or h and r = 1 or 8), it can move exactly to 3 squares
    // when the king is at the last row or last column other than the four corners it can move to exactly 5 squares
    // else the king can move to 8 squares

    if (c == 'a' || c == 'h')
        flag++;
    if (r == '1' || r == '8')
        flag++;

    if (flag == 0)
        cout << "8\n";
    else if (flag == 1)
        cout << "5\n";
    else
        cout << "3\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}