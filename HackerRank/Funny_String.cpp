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
    int test_case;
    bool flag;
    string s1, s2;

    string reverse_string(string s) {
        reverse(s.begin(), s.end());

        return s;
    }

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(s1);

            s2 = reverse_string(s1);

            int n = s1.size();
            flag = true;

            for (int i = 0; i < n - 1; i++) {
                if (abs(s1[i] - s1[i + 1]) != abs(s2[i] - s2[i + 1])) {
                    flag = false;
                    break;
                }
            }

            print(flag ? "Funny" : "Not Funny", '\n');
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