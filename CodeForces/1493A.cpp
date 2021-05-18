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
    int test_case;
    int n, k;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(test_case);

        while (test_case--)
        {
            scan(n, k);

            vector<int> ans;

            for (int i = k + 1; i <= n; i++)
                ans.push_back(i);

            for (int i = ceil((double)k / 2); i < k; i++)
                ans.push_back(i);

            int len = ans.size();

            print(len, '\n');

            if (len)
            {
                for (auto it : ans)
                    print(it, ' ');

                print('\n');
            }
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