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
    string str;

    int absolute(pair<const char, int> element) {
        int val = element.second;

        return ((val < 0) ? -val : val);
    }

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

            map<char, int> letterCount;

            for (int i = 0; i < n / 2; i++)
                letterCount[str[i]]++;

            for (int i = n / 2; i < n; i++)
                letterCount[str[i]]--;

            for (auto it : letterCount)
                count += absolute(it);

            print(count / 2, '\n');
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