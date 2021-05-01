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
    string str;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--) {
            scan(str);

            set<char> unique_letter;

            for (char ch : str)
                unique_letter.insert(ch);

            print(unique_letter.size(), '\n');
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