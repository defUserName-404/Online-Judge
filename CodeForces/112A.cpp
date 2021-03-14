#include <bits/stdc++.h>
#define max_size (int)10e6
#define Pi 3.14159

using namespace std;

typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;

void solve(string s1, string s2)
{
    for (ui i = 0; i < s1.length(); i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }

    if (s1.compare(s2) == 0)
        cout << "0\n";
    else if (s1.compare(s2) > 0)
        cout << "1\n";
    else if (s1.compare(s2) < 0)
        cout << "-1\n";
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    solve(str1, str2);

    return 0;
}