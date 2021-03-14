#include <bits/stdc++.h>

using namespace std;

int m, n;
int A[110], B[110];

void solve()
{
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> A[i];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> B[i];
    sort(A, A + m, greater<int>());
    sort(B, B + n, greater<int>());

    cout << A[0] << ' ' << B[0] << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}