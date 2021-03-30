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
    int test_case;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(n);

            int count_3, count_5, temp;
            count_5 = n, count_3 = 0;

            while (true) {
                if (!(count_5 % 3) && !(count_3 % 5)) {
                    for (int i = 0; i < count_5; i++)
                        print(5);
                    for (int i = 0; i < count_3; i++)
                        print(3);
                    print('\n');

                    break;
                } else {
                    count_5 -= 5;
                    count_3 += 5;
                }

                if (count_5 < 0) {
                    print(-1, '\n');

                    break;
                }
            }
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