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
    int test_case, n;

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

            if (n == 2)
            {
                print(-1, '\n');
                continue;
            }

            int count = 0;

            for (int i = 1; i <= (n * n); i += 2)
            {
                print(i, ' ');
                count++;

                if (count == n)
                {
                    print('\n');
                    count = 0;
                }
            }

            for (int j = 2; j <= (n * n); j += 2)
            {
                print(j, ' ');
                count++;

                if (count == n)
                {
                    print('\n');
                    count = 0;
                }
            }
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