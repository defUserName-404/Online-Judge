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

class SolutionToProblem
{
    // variables
    int test_case, n;
    bool flag;
    string str;

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
            scan(n, str);

            flag = true;
            unordered_set<char> finished;

            for (int i = 0; i < n - 1; i++)
            {
                if (finished.count(str[i]))
                {
                    flag = false;
                    break;
                }

                if (str[i] != str[i + 1])
                    finished.insert(str[i]);
            }

            if (finished.count(str[n - 1]))
                flag = false;

            print((flag ? "YES" : "NO"), '\n');
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