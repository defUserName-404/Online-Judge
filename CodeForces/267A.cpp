// Verdict: TLE
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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
    int a, b, x, y;
    int testCase, count;

   public:
    void solution_function() {
        scan(testCase);

        while (testCase--) {
            scan(a, b);

            x = min(a, b), y = max(a, b);
            count = 0;

            while (y != 0) {
                y %= x;
                count = count + (y / x);

                if (y < x)
                    swap(y, x);
            }

            print(count, '\n');
        }
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}