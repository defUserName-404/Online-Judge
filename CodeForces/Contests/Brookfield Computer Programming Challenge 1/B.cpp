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
    string s1, s2;

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

        for (int i = 0; i <= n; i++)
        {
            getline(cin, s1);
            getline(cin, s2);

            string item1 = "", item2 = "";

            for (int i = s1.size() - 1; i >= 0; i--)
            {
                if (s1[i] == ' ')
                    break;

                item1.push_back(s1[i]);
            }

            reverse(item1.begin(), item1.end());

            for (int i = s2.size() - 1; i >= 0; i--)
            {
                if (s2[i] == ' ')
                    break;

                item2.push_back(s2[i]);
            }

            reverse(item2.begin(), item2.end());

            string item = item2 + "-" + item1;

            print("Uh! ", item, '!', '\n');
    }
}
}
;

int main()
{
    Solution solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}