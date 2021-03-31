// This solution is giving me TLE for test case 3.
// I don't know how else I can optimize this.

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
    int n, m, x;
    set<int> ans;
    unordered_multiset<int> a, b;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        for (int i = 0; i < n; i++) {
            scan(x);
            a.insert(x);
        }

        scan(m);

        for (int i = 0; i < m; i++) {
            scan(x);
            b.insert(x);
        }

        for (auto it : b) {
            if (a.count(it) != b.count(it))
                ans.insert(it);
        }

        for (auto it : ans)
            print(it, ' ');
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