#include <bits/stdc++.h>
using namespace std;

int sum(unsigned int N)
{
    int res, temp;

    temp = N / 10000;

    res = temp + (N % 10);

    return res;
}

int main()
{
    int testCase;
    cin >> testCase;

    for (unsigned int i = 1; i <= testCase; i++)
    {
        unsigned int num;
        cin >> num;

        cout << "Sum = " << sum(num) << endl;
        ;
    }

    return 0;
}