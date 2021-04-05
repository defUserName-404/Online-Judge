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
    int x, odd, even;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        odd = even = 0;

        for (int i = 0; i < 3; i++) {
            scan(x);

            (x & 1) ? odd++ : even++;
        }

        if (odd == 3 || even == 3)
            print("You have to choose two\n");
        else
            print("3 Kimonos for Nezuko\n");
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