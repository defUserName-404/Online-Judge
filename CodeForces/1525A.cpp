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

class SolutionToProblem
{
    // variables
    int n;
    int test_case;

  public:
    SolutionToProblem()
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

            int p = n, q = 100;

            int gcd = std::gcd(p, q);

            if (gcd == 1)
            {
                print(100, '\n');
                continue;
            }

            while (gcd != 1)
            {
                p /= gcd;
                q /= gcd;

                gcd = std::gcd(p, q);
            }

            print(q, '\n');
        }
    }
};

int main()
{
    SolutionToProblem solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}