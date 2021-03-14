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
    int testCase, n, x;
    int odd_count, even_count;

public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(testCase);

        while (testCase--) {
            scan(n);

            even_count = odd_count = 0;

            for (int i = 0; i < n; i++) {
                scan(x);

                (x & 1) ? ++odd_count : ++even_count;
            }

            if (odd_count == 0)
                print("-1\n");
            else
                print(even_count, '\n');
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