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
    int r, g, b, m, ans;
    array<int, 3> count;

   public:
    void solution_function() {
        scan(r, g, b);

        count[0] = ceil(b / 2.0);
        count[1] = ceil(g / 2.0);
        count[2] = ceil(r / 2.0);

        m = INT_MIN;

        for (int i = 0; i < 3; i++) {
            if (count[i] > m) {
                m = count[i];
                ans = 30 + (3 - i - 1) + (m - 1) * 3;
            }
        }

        print(ans, '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}