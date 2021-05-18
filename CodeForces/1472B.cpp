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
    int testCase, count1, count2;
    bool check;

  public:
    void solution_function()
    {
        scan(testCase);

        while (testCase--)
        {
            scan(n);

            count1 = count2 = 0;

            while (n--)
            {
                scan(x);

                x == 1 ? count1++ : count2++;
            }

            if ((count1 + 2 * count2) % 2 == 0)
                check = false;
            else
                check = true;

            print((check ? "YES" : "NO"), '\n');
        }
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}