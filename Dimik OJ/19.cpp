#include <bits/stdc++.h>

using namespace std;

void wordCount(string in)
{
    int count = 0;

    for (int i = 0; i < in.length(); i++)
    {
        if (in[i] == ' ')
            count++;
    }

    cout << "Count = " << count + 1 << endl;
}

int main()
{
    int testCase;
    string str;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        getchar();
        getline(cin, str);

        wordCount(str);
    }

    return 0;
}