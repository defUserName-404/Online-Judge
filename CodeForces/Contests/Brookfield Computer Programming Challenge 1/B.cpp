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
    int n;
    string s;

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

        scan(n);

        for (int i = 1; i <= n; i++)
        {
            getline(cin, s);
            cin.ignore();

            string item1 = "", item2 = "";

            if (i % 2 == 0)
            {
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == ' ')
                        break;

                    item1.push_back(s[i]);
                }

                reverse(item1.begin(), item1.end());
            }

            else
            {
                for (int i = s.size() - 1; i >= 0; i--)
                {
                    if (s[i] == ' ')
                        break;

                    item2.push_back(s[i]);
                }

                reverse(item2.begin(), item2.end());
            }

            string item = item2 + "-" + item1;

            print("Uh! ", item, '!', '\n');
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