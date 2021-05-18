#include <iostream>

using namespace std;

void out(int x, int y)
{
    int div1 = x / y;
    double div2 = (double)x / y;
    double div_def = div2 - div1;
    int move = ((div1 + 1) * y) - x;

    if (div_def == 0)
        cout << "0" << endl;
    else
        cout << move << endl;
}

int main()
{
    int testCase, a, b;
    cin >> testCase;
    for (int i = 1; i <= testCase; i++)
    {
        cin >> a >> b;
        out(a, b);
    }

    return 0;
}