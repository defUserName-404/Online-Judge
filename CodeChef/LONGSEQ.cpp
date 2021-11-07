#include <bits/stdc++.h>
#define LOCAL_DEBUG_IN
#define LOCAL_DEBUG_OUT

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
    int n;
    int test_case, count0, count1;

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

        scan(test_case);

        while (test_case--)
        {
            scan(n);

            count0 = 0, count1 = 0;

            while (n)
            {
                int digit = n % 10;
                if (digit == 0)
                    count0++;
                else
                    count1++;

                n /= 10;
            }

            print((abs(count0 - count1) == 2 ? "Yes" : "No"), '\n');
        }
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