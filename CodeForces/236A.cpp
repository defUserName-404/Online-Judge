#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int char_count = unique(s.begin(), s.end()) - s.begin();

    (char_count % 2 == 0) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!\n";

    return 0;
}