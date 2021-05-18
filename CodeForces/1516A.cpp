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
    int n, k;
    int test_case;

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

            vector<int> arr(n);

            for (int &it : arr)
                scan(it);

            int sum = 0;

            for (int i = 0; i < n - 1; i++)
            {
                while (arr[i] > 0)
                {
                    arr[i]--;
                    k--;
                    sum++;

                    if (k == 0)
                        break;
                }

                if (k == 0)
                    break;
            }

            arr[n - 1] += sum;

            for (int it : arr)
                print(it, ' ');

            print('\n');
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