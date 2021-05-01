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
    string str;
    bool check;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(str);

        int n = str.length();

        map<char, int> letter_count;
        int flag = 0;

        check = true;

        for (auto it : str)
            letter_count[it]++;
        
        if (n % 2) {
            for (auto it : letter_count) {
                if (it.second % 2)
                    flag++;

                if (flag == 2) {
                    check = false;
                    break;
                }
            }
        } else {
            for (auto it : letter_count) {
                if (it.second % 2) {
                    check = false;
                    break;
                }
            }
        }

        print(check ? "YES\n" : "NO\n");
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