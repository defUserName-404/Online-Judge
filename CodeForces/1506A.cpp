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

class Solution_To_Problem
{
    // variables
    int test_case;
    ll n, m, x;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--)
        {
            scan(n, m, x);

            ll row, column;

            row = x % n;

            if (row == 0)
                row = n;

            column = (double)(x - row + n) / n;

            ll ans = (row - 1) * m + column;

            print(ans, '\n');
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