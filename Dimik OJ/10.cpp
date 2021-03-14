#include <bits/stdc++.h>

using namespace std;

void runRate(int opp, int team, int ball, double arr[])
{
    double Cur_RR, Req_RR;

    Cur_RR = (team * 6.0 / (300 - ball));

    if (opp - team > 0)
        Req_RR = ((opp - team + 1) * 6.0 / ball);
    else
        Req_RR = 0;

    arr[0] = Cur_RR;
    arr[1] = Req_RR;
}

int main()
{
    int testCase;
    double arr[2];
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int opponent_score, team_score, balls_rem;
        cin >> opponent_score >> team_score >> balls_rem;

        runRate(opponent_score, team_score, balls_rem, arr);

        printf("%.2lf %.2lf\n", arr[0], arr[1]);
    }

    return 0;
}