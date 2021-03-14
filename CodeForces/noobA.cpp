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
    int testCase, n, pos;
    string str;

public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif
        scan(testCase);

        while (testCase--) {
            scan(n, str);

            pos = 0;

            string ans = "ESWN";

            for (auto it : str)
                it == '0' ? pos++ : pos--;

            pos %= 4;

            if (pos < 0)
                pos += 4;

            print(ans[pos], '\n');
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