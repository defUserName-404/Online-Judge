#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    int arr[1010];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if (n % 2 == 0) {
        int mid = (n - 1) / 2;
        cout << min(arr[mid], arr[mid + 1]);
    }

    else {
        int mid = (n - 1) / 2;
        cout << arr[mid];
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}