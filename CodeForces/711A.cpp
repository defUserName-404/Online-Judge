#include <bits/stdc++.h>

using namespace std;

void To_Seat_or_Not_to_Seat(char seats[][5], int size)
{
    int i, j, flag = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (seats[i][j] == 'O' && seats[i][j + 1] == 'O')
            {
                flag = 1;
                seats[i][j] = seats[i][j + 1] = '+';
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;

        for (i = 0; i < size; i++)
        {
            for (j = 0; j < 5; j++)
            {
                cout << seats[i][j];
            }
            cout << endl;
        }
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int n; // number of rows
    int i, j;
    cin >> n;

    char rows[1001][5];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 5; j++)
            cin >> rows[i][j];
    }

    To_Seat_or_Not_to_Seat(rows, n);

    return 0;
}