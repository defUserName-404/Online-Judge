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
    int n, m;
    int max, count;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n, m);
        vector<string> v(n);

        for (auto &str : v)
            scan(str);

        max = count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int current = 0;
                for (int k = 0; k < m; k++) {
                    if (v[j][k] == '1' || v[i][k] == '1')
                        current++;
                }

                if (max < current) {
                    max = current;
                    count = 1;
                } else if (max == current){
                    count++;
                }
            }
        }

        print(max, '\n', count, '\n');
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