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
    bool flag;
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

        scan(test_case);

        string vowels = "aeiou";

        while (test_case--)
        {
            scan(str);

            flag = false;

            for (const char &ch : str)
            {
                if (vowels.find(ch) != string::npos)
                {
                    flag = true;
                    break;
                }
            }

            print(flag ? "Yes\n" : "No\n");
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