#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int testCase, n, x;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        cin >> n >> x;
        if (n < 3)
            cout << "1" << endl;

        else
        {
            double k = (double)(n - 2) / x;
            int l = ceil(k);

            cout << l + 1 << endl;
        }
    }

    return 0;
}