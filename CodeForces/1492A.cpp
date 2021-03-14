#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

template <typename... T>
void scan(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args) {
    ((cout << args), ...);
}

class Solution_To_Problem {
    // variables
    ll a, b, c, p, ans;
    int test_case;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(p, a, b, c);

            ll a_cycle, b_cycle, c_cycle;

            a_cycle = ceil((ld)p / a) * a;
            b_cycle = ceil((ld)p / b) * b;
            c_cycle = ceil((ld)p / c) * c;

            ans = min(min(a_cycle, b_cycle), c_cycle) - p;

            print(ans, '\n');
        }
    }
} Solution;

int main() {
#ifdef LOCAL_DEBUG_IN
    print("INPUT:\n");
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}