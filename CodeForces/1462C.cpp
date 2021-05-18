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

class Solution_To_Problem
{
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int test_case, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool con, con1, con2, check;
    string str, s1, s2;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

    void run_case()
    {
        scan1(n);

        if (n > 45)
        {
            print1("-1\n");
            return;
        }

        vector<int> digits = {9, 8, 7, 6, 5, 4, 3, 2, 1};
        vector<int> ans;

        sum = 0;
        int i = 0;

        while (sum != n)
        {
            if (sum + digits[i] > n)
            {
                i++;
                continue;
            }
            else
            {
                sum += digits[i];
                ans.push_back(digits[i]);
                i++;
            }
        }

        sort(ans.begin(), ans.end());

        for (auto it : ans)
            print1(it);

        print1('\n');
    }

  public:
    void solution_function()
    {
        scan1(test_case);

        while (test_case--)
            run_case();
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}