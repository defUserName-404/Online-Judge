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
    int n, total_zero, total_one;
    string str;
    map<char, int> count;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n, str);

        for (int i = 0; i < n; i++)
        {
            count[str[i]]++;
        }

        total_one = count['n'];
        total_zero = (n - (total_one * 3)) / 4;

        for (int i = 1; i <= total_one; i++)
            print("1 ");
        for (int i = 1; i <= total_zero; i++)
            print("0 ");

        print('\n');
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