#include <bits/stdc++.h>
#define LOCAL_DEBUG_IN
#define LOCAL_DEBUG_OUT

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
    int n;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        vector<string> arr(n);

        for (string &s : arr)
            scan(s);

        unordered_set<char> ans;

        bool flag = true;

        for (int i = 0; i < arr[0].size(); i++)
        {
            for (string str : arr)
            {
                if (str.find(arr[0][i]) == string::npos)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                ans.insert(arr[0][i]);
        }

        print(ans.size(), '\n');
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