#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
    int n, x, testCase;
    ll sum_min, sum_max;

  public:
    void solution_function()
    {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(testCase);

        while (testCase--)
        {
            scan(n, x);

            vector<int> arr(n);

            sum_min = sum_max = 0;

            for (int i = 0; i < n; i++)
            {
                scan(arr[i]);
                sum_max += ceil((double)arr[i] / x);
                sum_min += arr[i];
            }

            sum_min = ceil((double)sum_min / x);

            print(sum_min, ' ', sum_max, '\n');
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