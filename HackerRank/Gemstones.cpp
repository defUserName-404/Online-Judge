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
    int n;
    string str;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        int t = n;

        vector<set<char>> collection;

        int i = 0;

        while (n--) {
            scan(str);
            
            for (char ch : str) {
                collection.at(i).insert(ch);
                i++;
            }
        }

        for (int j = 0; j < t; j++) {
            for (char ch : collection.at(j)) {

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