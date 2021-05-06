#include <bits/stdc++.h>

using namespace std;

template <typename... T>
void scan(T&... args) {
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args) {
    ((cout << args), ...);
}

class Solution_To_Problem {
    // variables
    int n;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        scan(n);

        vector<string> arr(n);

        for (string &it : arr)
            scan(it);

        set<char> ans;

        bool flag = true;

        for (char ch : arr[0]) {
            for (string str : arr) {
                if (str.find(ch) == -1)
                    flag = false;
            }
            if(flag)
                ans.insert(ch);
        }

        print(ans.size(), '\n');

        // string str = "Hello World";
        // size_t found1 = str.find("ello");
        // size_t found2 = str.find('o');
        // size_t found3 = str.find('a');

        // print(found1, ' ', found2, ' ', found3, '\n');
    }
} Solution;

int main() {
#ifdef LOCAL_DEBUG_IN
    print("INPUT:\n");
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}