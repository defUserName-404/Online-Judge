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

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        vector<int> arr(n), sorted(n);

        for (auto &it : arr) {
            scan(it);
            sorted.push_back(it);
        }

        sort(sorted.begin(), sorted.end());

        int count = 0;
        int j = 0;

        while (arr.size()) {
            for (auto it = arr.begin(); it != arr.end(); it++) {
                if (*it == sorted[j]) {
                    count += (it - arr.begin());

                    arr.erase(it);
                    j++;
                }
            }
        }

        print(count, arr[(n / 2) + 1], '\n');
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