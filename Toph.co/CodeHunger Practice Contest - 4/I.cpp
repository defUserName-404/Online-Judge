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

class Solution
{
    // variables
    string str;

  public:
    Solution()
    {
#ifdef LOCAL_DEBUG_IN
        print("\033[1;31mINPUT:\n");
        print("\033[34m");
#endif
    }

    void test()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\n\033[1;31mOUTPUT:\n");
        print("\033[32m");
#endif

        scan(str);

        stack<char> parentheses;

        int n = str.size();

        for (int i = 0; i < n; i++)
        {
            if (parentheses.empty())
            {
                parentheses.push(str[i]);
                continue;
            }

            int diff = str[i] - parentheses.top();

            (diff == 1 || diff == 2) ? parentheses.pop() : parentheses.push(str[i]);
        }

        print(parentheses.empty() ? "Yes\n" : "No\n");
    }
};

int main()
{
    Solution solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}