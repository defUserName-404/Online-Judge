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
    double m, n, a;
    ll ans;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

   public:
    void solution_function() {
        scan(m, n, a);

        ans = ceil(m / a) * ceil(n / a);

        print(fixed, setprecision(0), ans, '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}