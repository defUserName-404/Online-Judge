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

class Solution_To_Problem
{
    // variables
    int n, x;
    int test_case, count;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--)
        {
            scan(n);

            count = 0;

            for (int i = 0; i < n; i++)
            {
                scan(x);

                if (x == 2)
                    count++;
            }

            print(n - count, '\n');
        }
    }
} Solution;

int main()
{
#ifdef LOCAL_DEBUG_IN
    print("INPUT:\n");
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}