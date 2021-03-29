#include <bits/stdc++.h>

using namespace std;

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
    int n, k;
    int test_case;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(n, k);

            vector<int> arr(n);

            int l = 0, r = n - 1;

            for (int i = 0; i < n; i++) {
                if (i % 2) {
                    arr[i] = l;
                    l++;
                } else {
                    arr[i] = r;
                    r--;
                }
            }

            for (int i = 0; i < n; i++) {
                if (arr[i] == k) {
                    print(i, '\n');
                    break;
                }
            }
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