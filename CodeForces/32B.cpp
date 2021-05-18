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
    int testCase, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool con, con1, con2, check;
    vector<int> code;
    string str, s1, s2;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

  public:
    void solution_function()
    {
        scan(str);

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '.')
            {
                code.push_back(0);
            }
            if (str[i] == '-' && str[i + 1] == '.')
            {
                code.push_back(1);
                i++;
            }
            if (str[i] == '-' && str[i + 1] == '-')
            {
                code.push_back(2);
                i++;
            }
        }

        for (auto it : code)
            print(it);

        print('\n');
    }
} Solution;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}