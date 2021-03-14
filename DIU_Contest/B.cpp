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
    ll n, x, h, avg;
    int testCase, count;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif
        scan(testCase);

        while (testCase--) {
            scan(n, x);

            vector<int> height;

            for (int i = 0; i < n; i++) {
                scan(h);
                height.push_back(h);
            }

            sort(height.begin(), height.end());

            avg = (height[n - 1] + height[0]) / 2;

            count = 0;

            for (int i = 0; i < n; i++) {
                if (height[i] == avg)
                    count++;
                if (count == x)
                    break;
            }

            print((count == x ? "PROTECTED" : "NOT PROTECTED"), '\n');
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