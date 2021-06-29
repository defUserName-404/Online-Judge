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
    int test_case, n, t;

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
            scan(n, t);

            vector<int> cars(n);

            for (int &x : cars)
                scan(x);

            sort(cars.begin(), cars.end());

            bool flag = true;

            for (int i = 0; i < n - 1; i++)
            {
                if (cars[i] + t > cars[i + 1])
                {
                    flag = false;
                    break;
                }
            }

            print(flag ? "NO\n" : "YES\n");
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