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

class Solution
{
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int test_case;
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

        scan(test_case);

        while (test_case--)
        {
            scan(s1, s2);

            map<char, int> keyboardLayout;

            for (int i = 0; i < 26; i++)
                keyboardLayout.insert({s1[i], i});

            int len = s2.size();
            int count = 0;

            for (int i = 1; i < len; i++)
                count += abs(keyboardLayout[s2[i]] - keyboardLayout[s2[i - 1]]);

            print(count, '\n');
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