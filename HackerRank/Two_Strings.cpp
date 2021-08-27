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
    int test_case;
    string s1, s2;
    bool flag;

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

        scan(test_case);
        
        while (test_case--)
        {
            scan(s1, s2);

            int count[26] = {0};
            flag = false;

            for (int i = 0; i < s1.size(); i++)
                count[s1[i] - 'a']++;

            for (int i = 0; i < s2.size(); i++)
            {
                if (count[s2[i] - 'a'])
                {
                    flag = true;
                    break;
                }
            }

            print((flag ? "YES" : "NO"), '\n');
        }

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