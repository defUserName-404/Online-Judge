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
    int m, n;
    string str;
    vector<string> grid;
    vector<bitset<100>> check;

   public:
    void solution_function() {
        scan(n, m);

        for (int i = 0; i < n; i++) {
            scan(str);
            grid.push_back(str);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (grid[i][j] == grid[i][j + 1]) {
                    check[i][j] = check[i][j + 1] = 0;
                } else if (grid[i][j] == grid[i + 1][j]) {
                    check[i][j] = check[i + 1][j] = 0;
                }
            }
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (check[i][j])
                    print(grid[i][j]);
            }
        }
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}