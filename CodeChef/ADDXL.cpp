#include <bits/stdc++.h>

using namespace std;

class Solution_To_Problem {
    // variables
    string a, b, sum;
    int carry, current;

   public:
    void solution_function() {
#ifdef LOCAL_DEBUG_OUT
        print("\nOUTPUT:\n");
#endif

        while (cin >> a >> b) {
            if (a.length() > b.length())
                swap(a, b);

            int n1 = a.length(), n2 = b.length();
            int diff = n2 - n1;

            carry = 0;

            for (int i = n1 - 1; i >= 0; i--) {
                current = ((a[i] - '0') + (b[i + diff] - '0') + carry);

                sum.push_back(current % 10 + '0');
                carry = current / 10;
            }

            for (int i = n2 - n1 - 1; i >= 0; i--) {
                current = (b[i] - '0') + carry;
                sum.push_back(current % 10 + '0');
                carry = current / 10;
            }

            if (carry)
                sum.push_back(carry + '0');

            reverse(sum.begin(), sum.end());

            cout << sum << '\n';

            sum.erase()
        }
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