#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        /*
            we assume, 
                the given number is x
                
                lcm(1, x - 1) = x - 1;
                gcd(1, x - 1) = 1;

                Therefore, lcm(1, x - 1) + gcd(1, x - 1) = x - 1 + 1 = x 
        */
        cout << "1 " << x - 1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}