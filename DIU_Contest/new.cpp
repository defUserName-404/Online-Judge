#include <iostream>

int modularExponentiation(int n, int mod);

int main() {
    int result;

    result = modularExponentiation(100, 97);

    std::cout << result << std::endl;

    return 0;
}

int modularExponentiation(int n, int mod) {
    int factorial = 1;

    for (int i = 2; i <= n; i++)
        factorial = ((factorial % mod) * i) % mod;

    return factorial;
}