// #include <bits/stdc++.h>

// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//         fact *= i;

//     return fact;
// }

// void solution()
// {
//     string str;
//     getline(cin, str);

//     int count = 1;

//     unordered_map<string, int> dup;

//     stringstream wordStream(str);

//     string word;
//     while (wordStream >> word)
//     {
//         //create a pair of map and bool
//         pair<map<string, int>::iterator, bool> retrunValue;

//         //insert element
//         // retrunValue = dup.insert(pair<string, int>(word, count));

//         //Check if map contains value
//         if (retrunValue.second == false)
//         {
//             //Element already exists
//             ++retrunValue.first->second;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int testCase;

//     cin >> testCase;
//     cin.ignore();

//     while (testCase--)
//         solution();

//     return 0;
// }