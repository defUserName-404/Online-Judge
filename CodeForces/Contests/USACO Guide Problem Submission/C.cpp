#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template <typename... T>
void scan(T &...args)
{
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args)
{
    ((cout << args), ...);
}

class Solution
{
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int test_case, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool flag, check;
    string str, s1, s2;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

  public:
    int lcs(vector<int> &a, vector<int> &b, int m, int n)
    {
        int L[m + 1][n + 1];
        int i, j;

        for (i = 0; i <= m; i++)
        {
            for (j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                    L[i][j] = 0;

                else if (a[i - 1] == b[j - 1])
                    L[i][j] = L[i - 1][j - 1] + 1;

                else
                    L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }

        return L[m][n];
    }

    Solution()
    {
#ifdef LOCAL_DEBUG_IN
        print("\033[1;31mINPUT:\n");
        print("\033[34m");
#endif
    }

    void test()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\n\033[1;31mOUTPUT:\n");
        print("\033[32m");
#endif

        scan(n);

        vector<int> a(n), b(n);

        for (int &x : a)
            scan(x);

        for (int &y : b)
            scan(y);

        print(lcs(a, b, n, n), '\n');
    }
};

int main()
{
    Solution solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}