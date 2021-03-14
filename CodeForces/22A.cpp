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
    int n, x;
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    set<int> s;
    vector<int> arr;

    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

   public:
    void solution_function() {
        scan(n);

        for (int i = 0; i < n; i++) {
            scan(x);
            s.insert(x);
        }

        for (auto it : s)
            arr.push_back(it);

        if (arr.size() == 1)
            print("NO", '\n');

        else
            print(arr[1], '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}