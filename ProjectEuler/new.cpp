#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template <typename... T>
void scan(T &...args) {
    ((cin >> args), ...);
}

template <typename... T>
void print(T... args) {
    ((cout << args), ...);
}

class SolutionToProblem {
    // variables
    int a, b, c, d, m, n, p, q, s, t, x, y, z;
    int test_case, count, count1, count2, sum, sum1, sum2, temp;
    ll r, l, k;
    double e, f, g, h;
    char ch, ch1, ch2;
    bool flag, check;
    string str, s1, s2;
    // constants
    const ld Pi = acos(-1);
    const int Mod = 10'000'007;

   public:
    SolutionToProblem() {
#ifdef LOCAL_DEBUG_IN
        print("\033[1;31mINPUT:\n");
        print("\033[34m");
#endif
    }

    void test() {
#ifdef LOCAL_DEBUG_OUT
        print("\n\033[1;31mOUTPUT:\n");
        print("\033[32m");
#endif


    }
};

int main() {
    SolutionToProblem solution;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution.test();

    return 0;
}