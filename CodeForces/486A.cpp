#include <iostream>

using namespace std;

long long sum_of_series(long long x)
{
    long long sum;

    (x % 2 == 0) ? sum = x / 2 : sum = -(x + 1) / 2;

    return sum;
}

int main()
{
    long long n;
    cin >> n;

    cout << sum_of_series(n) << endl;

    return 0;
}
