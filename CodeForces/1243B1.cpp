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
    int n, testCase, count;
    string s1, s2;
    array<char, 4> unmatched;

    void test_case() {
        scan(n, s1, s2);

        count = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                count++;

                if (count > 2) {
                    print("NO\n");
                    return;
                }

                unmatched[j] = s1[i];
                j++;
                unmatched[j] = s2[i];
                j++;
            }
        }

        if (count == 2 && (unmatched[0] == unmatched[2]) && (unmatched[1] == unmatched[3]))
            print("YES\n");
        else
            print("NO\n");
    }

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(testCase);
        cin.ignore();

        while (testCase--)
            test_case();
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