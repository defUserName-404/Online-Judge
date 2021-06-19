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
    int n;

    bool isPrime(const int &n)
    {
        if (n == 1)
            return false;

        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
    }

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

        if (isPrime(n))
            print("NO PUNISHMENT\n");

        else
            for (int i = 0; i < n; i++)
                print("I DID NOT DO THE ASSIGNMENT.\n");
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