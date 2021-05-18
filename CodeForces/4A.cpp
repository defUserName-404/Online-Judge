#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    if (N % 2 == 0 && N != 2)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}