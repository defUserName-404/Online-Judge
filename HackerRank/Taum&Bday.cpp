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
    ll b, w, bc, wc, z;
    ll test_case, min_b, min_w, total;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(b, w, bc, wc, z);

            min_b = min(bc, wc + z);
            min_w = min(wc, bc + z);

            total = b * min_b + w * min_w;

            print(total, '\n');
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