#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
    int n, x;
    string str;

  public:
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

        ll low = INT64_MAX, high = INT64_MIN;
        string f, nf;

        while (n--)
        {
            scan(str, x);

            if (x < low)
            {
                low = x;
                nf = str;
            }

            if (x > high)
            {
                high = x;
                f = str;
            }
        }

        print(nf, ' ', f, '\n');
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