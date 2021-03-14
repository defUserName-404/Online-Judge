#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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
    unordered_set<string> count;

   public:
    void solution_function() {
        scan(n);
        cin.ignore();

        for (int i = 0; i < n; i++) {
            getline(cin, str);

            count.insert(str);
        }

        print(count.size(), '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}