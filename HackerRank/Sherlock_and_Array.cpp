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
    int n;
    int test_case, left, right;
    bool flag;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(n);

            vector<int> arr(n);

            for (auto &it : arr)
                scan(it);

            flag = false;

            for (int i = 1; i < n - 1; i++) {
                left = right = 0;
                
                for (int j = 0; j < i; j++)
                    left += arr[j];
                for (int k = i + 1; k < n; k++)
                    right += arr[k];

                if (left == right) {
                    flag = true;
                    break;
                }
            }

            print((flag ? "YES" : "NO"), '\n');
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