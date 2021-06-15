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
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool con, con1, con2, check;
    string str, s1, s2;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 1000000007;

  public:
    ll factorial(int n)
    {
        ll fact = 1;

        for (int i = 2; i <= n; i++)
        {
            fact = (fact * i) % Mod;
            fact %= Mod;
        }

        return fact;
    }

    void solution_function()
    {
        scan1(n);

        ll fact = factorial(n);

        count = 0;
        print2(fact, '\n');
        for (ll i = 1; i <= sqrt(fact); i++)
            if (fact % i == 0)
                count++;

        print2(2 * count, '\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}