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
    int n, test_case, count;
    string str, s1, s2;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(str);

            count = 0;
            n = str.size();

            if (n % 2) {
                print(-1, '\n');
                continue;
            }

            s1 = s2 = "";

            for (int i = 0; i < (n / 2); i++)
                s1 += str[i];

            for (int j = (n / 2); j < n; j++)
                s2 += str[j];

            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            for (int i = 0; i < n / 2; i++)
                if (s1[i] != s2[i])
                    count++;

            print(count, '\n');
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