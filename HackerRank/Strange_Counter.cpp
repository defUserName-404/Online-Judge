#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
    ll time, i, sum, ans;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(time);

        i = 3, sum = 0;

        while (true) {
            sum += i;

            if (sum >= time) {
                ans = sum - time + 1;
                break;
            }

            i *= 2;
        }

        print(ans, '\n');
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