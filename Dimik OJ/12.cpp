#include <bits/stdc++.h>

using namespace std;

void solution(int n) {
    int count_of_5 = 0;
    int temp;

    for (int i = 5; i <= n; i += 5) {
        temp = i;
        while (temp % 5 == 0) {
            ++count_of_5;
            temp /= 5;
        }
    }
    cout << count_of_5 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        solution(n);
    }

    return 0;
}