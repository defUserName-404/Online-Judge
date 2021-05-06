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

    vector<int> __delete(vector<int> arr, int key) {
        int n = arr.size();
        bool flag = false;

        vector<int> after_delete;

        for (auto it : arr) {
            if (it == key && !flag) {
                flag = true;
                continue;
            }
            after_delete.push_back(it);
        }

        return after_delete;
    }

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        vector<int> arr(n), sorted;

        for (auto &it : arr) {
            scan(it);
            sorted.push_back(it);
        }

        sort(sorted.begin(), sorted.end());

        int count = 0;
        int j = 0;

        while (j < n - 1) {
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == sorted[j]) {
                    count += i;
                    arr = __delete(arr, sorted[j]);

                    j++;
                    continue;
                }
            }
        }

        print(count, ' ', sorted[n / 2], '\n');
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