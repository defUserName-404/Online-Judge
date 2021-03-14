#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

#if 0
// Bug to find later
void Fibonacci(int n)
{
    ull f;
    // Using Binet's formula to calculate the F(n)

    f = (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));

    cout << f << endl;
}
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    Fibonacci(n);

    return 0;
}