#include <iostream>

using namespace std;

int main()
{
    int n;
    double vol[100], sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> vol[i];
        sum += vol[i];
    }

    printf("%.12lf\n", sum / n);

    return 0;
}