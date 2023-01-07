#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int opponent_score, team_score, balls_remaining;
        cin >> opponent_score >> team_score >> balls_remaining;

        double currant_run_rate = (team_score * 6.0 / (300 - balls_remaining)),
               required_run_rate = opponent_score > team_score
                                       ? ((opponent_score - team_score + 1) * 6.0 / balls_remaining)
                                       : 0;

        printf("%.2lf %.2lf\n", currant_run_rate, required_run_rate);
    }

    return 0;
}