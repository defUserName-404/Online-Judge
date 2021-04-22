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
    int test_case, ans;

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

            ans = 0;

            for (int i = 1; i < n - 1; i++) {
                if ((arr[i] != arr[i - 1]) and (arr[i] != arr[i + 1]))
                    ans = (i + 1);
            }

            if (!ans) {
                if (arr[0] != arr[1])
                    ans = 1;
                else
                    ans = n;
            }

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