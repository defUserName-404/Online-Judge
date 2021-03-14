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
    int n, sum;
    string str;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(str, n);

        sum = 0;

        for (auto it : str) {
            if (it >= '0' && it <= '9')
                sum += it - '0';
        }

        if (n - sum >= 0 && n - sum <= 27)
            print("YES\n");
        else
            print("NO\n");
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