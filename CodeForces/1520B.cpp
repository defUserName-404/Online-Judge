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
    int n, d;
    int test_case, temp, ans;

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

            temp = n;
            d = 0;

            while (temp > 0)
            {
                d++;
                temp /= 10;
            }

            string str = "";

            for (int i = 0; i < d; i++)
                str.push_back('1');

            ans = ((d - 1) * 9) + (n / stoi(str));

            print(ans, '\n');
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