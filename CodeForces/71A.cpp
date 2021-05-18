#include <cstring>
#include <iostream>

using namespace std;

void out(char in[101])
{
    int i = 0, j = strlen(in) - 1;
    if (strlen(in) <= 10)
        cout << in << endl;
    else
    {
        cout << in[i] << strlen(in) - 2 << in[j] << endl;
    }
}

int main()
{
    int n;
    char word[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> word;

        out(word);
    }

    return 0;
}