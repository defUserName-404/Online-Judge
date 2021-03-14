#include <bits/stdc++.h>

using namespace std;

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
    int d, n, x;
    int testCase;
    vector<int> vec;

   public:
    void solution_function() {
        scan(testCase);

        while (testCase--) {
            scan(n, d);

            for (int i = 0; i < n; i++) {
                scan(x);
                vec.push_back(x);
            }

            sort(vec.begin(), vec.end());

            if (vec.back() <= d || vec[0] + vec[1] <= d)
                print("YES\n");
            else
                print("NO\n");
        }
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}