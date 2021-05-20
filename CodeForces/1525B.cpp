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

class SolutionToProblem
{
    // variables
    int n;
    int test_case, ans;

  public:
    SolutionToProblem()
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
            scan(n);

            vector<int> arr(n);

            for (int &x : arr)
                scan(x);

            if (is_sorted(arr.begin(), arr.end()))
                ans = 0;
            else if (arr[0] == 1 || arr[n - 1] == n)
                ans = 1;
            else if (arr[0] == n && arr[n - 1] == 1)
                ans = 3;
            else
                ans = 2;

            print(ans, '\n');
        }
    }
};

int main()
{
    SolutionToProblem solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}