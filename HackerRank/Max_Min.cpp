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
    int min_unfairness, current_unfairness;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n, k);
        vector<int> arr(n);

        for (auto &it : arr)
            scan(it);

        sort(arr.begin(), arr.end());

        min_unfairness = INT32_MAX;

        for (int i = 0; i < n - k; i++) {
            current_unfairness = arr[i + k - 1] - arr[i];

            if (current_unfairness < min_unfairness)
                min_unfairness = current_unfairness;
        }

        print(min_unfairness, '\n');
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