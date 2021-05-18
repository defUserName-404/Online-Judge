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
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int count0, count1, flag;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

  public:
    void solution_function()
    {
        scan(n);

        bitset<100> rem;

        count0 = count1 = 0;

        for (int i = 0; i < n; i++)
        {
            scan(x);
            rem[i] = (x % 2);

            if (rem[i])
                count1++;
            else
                count0++;

            if (count0 >= 2)
                flag = 1;
            else
                flag = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                if (rem[i] == 1)
                {
                    print(i + 1, '\n');
                    break;
                }
            }
            else
            {
                if (rem[i] == 0)
                {
                    print(i + 1, '\n');
                    break;
                }
            }
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