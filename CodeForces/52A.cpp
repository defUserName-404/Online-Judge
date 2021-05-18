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
    int count1, count2, count3, m;

  public:
    void solution_function()
    {
        scan(n);

        count1 = count2 = count3 = 0;

        for (int i = 0; i < n; i++)
        {
            scan(x);

            if (x == 1)
                ++count1;
            else if (x == 2)
                ++count2;
            else
                ++count3;
        }

        m = max(max(count1, count2), count3);

        print(n - m, '\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}