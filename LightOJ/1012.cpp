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
    int test_case, w, h, water;
    string str;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);
        cin.ignore();

        isal

        for (int tc = 0; tc < test_case; tc++) {
            scan(w, h);

            water = 0;

            for (int i = 0; i < h; i++) {
                scan(str);

                for (int j = 0; j < w; j++) {
                    if (str[j] == '#')
                        water++;
                }
            }
            print("Case ", tc, ": ", h * w - water, '\n');
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