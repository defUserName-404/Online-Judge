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
    int test_case, x, y;
    int L, R, U, D;
    string str;
    bool check_x, check_y;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);
        cin.ignore();

        while (test_case--)
        {
            scan(x, y, str);

            L = R = U = D = 0;

            check_x = check_y = false;

            for (auto ch : str)
            {
                if (ch == 'L')
                    L++;
                else if (ch == 'R')
                    R++;
                else if (ch == 'U')
                    U++;
                else
                    D++;
            }

            if (x > 0 && R >= x)
                check_x = true;
            if (x < 0 && L >= -x)
                check_x = true;
            if (x == 0)
                check_x = true;
            if (y > 0 && U >= y)
                check_y = true;
            if (y < 0 && D >= -y)
                check_y = true;
            if (y == 0)
                check_y = true;

            print(((check_x && check_y) ? "YES" : "NO"), '\n');
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