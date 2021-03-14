#include <bits/stdc++.h>

using namespace std;

int t;

void solution() {
    double cx, cy, r, x, y;

    cin >> cx >> cy >> r >> x >> y;

    double d = sqrt((pow((x - cx), 2) + pow((y - cy), 2)));

    cout << ((d > r) ? "The point is not inside the circle\n" : "The point is inside the circle\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    while (t--)
        solution();

    return 0;
}