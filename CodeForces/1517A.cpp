#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
    int test_case;
    ll n, count;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(n);

            count = 0;

            if (n % 2050) {
                print(count - 1, '\n');
                continue;
            }

            ll div = n / 2050;

            while (div > 0) {
                count += (div % 10);
                div /= 10;
            }

            print(count, '\n');
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