#include <bits/stdc++.h>

using namespace std;

#define scan1(x) cin >> x
#define print1(x) cout << x
#define scan2(x, y) cin >> x >> y
#define print2(x, y) cout << x << y
#define scan3(x, y, z) cin >> x >> y >> z
#define print3(x, y, z) cout << x << y << z
#define printd(x, y, z) cout << fixed << setprecision(y) << x << z

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

class Solution_To_Problem {
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    pair<int, int> indices;
    // ll r, l, k;
    // double e, f, g, h;
    // char ch, ch1, ch2;
    // bool con, con1, con2, check;
    // string str, s1, s2;
    vector<int> vec;
    // constants
    // const ld Pi = acos(-1);
    // const int Mod = 10'000'007;

   public:
    void solution_function() {
        scan1(n);

        // temp2 = 0;

        for (int i = 0; i < n; i++) {
            scan1(x);
            vec.push_back(x);
        }
        count = INT_MAX;

        for (int i = 0; i < vec.size() - 1; i++) {
            temp = abs(vec[i] - vec[i + 1]);

            if (temp < count) {
                count = temp;
                indices = make_pair(i + 1, i + 2);
            }
        }

        if (abs(vec[vec.size() - 1] - vec[0]) < count) {
            indices = make_pair(1, vec.size());
        }

        print3(indices.first, ' ', indices.second);
        print1('\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}