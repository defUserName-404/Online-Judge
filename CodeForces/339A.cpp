#include <bits/stdc++.h>

using namespace std;

void sorted_sum(string txt)
{
    for (int i = 0; i < txt.length(); i += 2)
    {
        for (int j = 0; j < i; j += 2)
        {
            if (txt[i] < txt[j])
                swap(txt[i], txt[j]);
        }
    }

    cout << txt;
}

int main()
{
    string s;
    cin >> s;

    sorted_sum(s);

    return 0;
}
