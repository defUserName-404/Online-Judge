#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template <typename... T>
void scan(T&... args) {
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args) {
    ((cout << args), ...);
}

class Solution_To_Problem {
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool con, con1, con2, check;
    string str, ans;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

   public:
    void solution_function() {
        scan(n, str);

        ans = "";

        if (n % 2) {
            for (int i = 0; i < n - 3; i++) {
                ans += str[i];
                if ((i - 1) % 2 == 0)
                    ans += '-';
            }
            ans += str[n - 3];
            ans += str[n - 2];
            ans += str[n - 1];
        } else {
            for (int i = 0; i < n - 2; i++) {
                ans += str[i];
                if ((i - 1) % 2 == 0)
                    ans += '-';
            }
            ans += str[n - 2];
            ans += str[n - 1];
        }

        print(ans, '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}