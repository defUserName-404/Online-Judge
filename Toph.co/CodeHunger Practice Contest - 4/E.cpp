#include <bits/stdc++.h>

using namespace std;

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

        int max_size = 0;

        scan(n);

        for (int i = 0; i < n; i++)
        {
            scan(x);

            max_size = max(x, max_size);
        }

        print(max_size, '\n');
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