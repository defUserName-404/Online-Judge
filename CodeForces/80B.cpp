#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

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
    int h, m, m_angle;
    char ch;
    double h_angle;

   public:
    void solution_function() {
        scan(h, ch, m);

        h_angle = ((h % 12) + (m / 60.0)) * 30.0;
        m_angle = m * 6;

        print(fixed, setprecision(1), h_angle, ' ', m_angle, '\n');
    }
} Solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution.solution_function();

    return 0;
}