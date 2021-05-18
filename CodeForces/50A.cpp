#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int domino;
    cin >> m >> n;

    //domino size 2x1
    domino = (m * n) / 2;

    cout << domino << endl;

    return 0;
}