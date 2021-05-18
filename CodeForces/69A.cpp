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

class Solution_To_Problem
{
    // variables
    int n, x, y, z;
    int sum_x, sum_y, sum_z;

  public:
    void solution_function()
    {
        scan(n);

        sum_x = sum_y = sum_z = 0;

        for (int i = 0; i < n; i++)
        {
            scan(x, y, z);

            sum_x += x;
            sum_y += y;
            sum_z += z;
        }

        print((((sum_x == sum_y) && (sum_x == sum_z) && (sum_x == 0)) ? "YES" : "NO"), '\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}