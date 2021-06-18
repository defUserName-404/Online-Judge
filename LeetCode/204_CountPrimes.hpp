#include <bitset>

// TLE
// TODO: Needs to implement Sieve method

class Solution
{
    bool isPrime(const int &i);

  public:
    int countPrimes(const int &n);
};

// bool Solution::isPrime(const int &i)
// {
//     for (int j = 2; j <= sqrt(i); j++)
//         if (i % j == 0)
//             return false;

//     return true;
// }

// int Solution::countPrimes(const int &n)
// {
//     unsigned int primeCount = 0;

//     for (int i = 2; i <= n; i++)
//         if (isPrime(i))
//             ++primeCount;

//     return primeCount;
// }

int Solution::countPrimes(const int &n)
{
    // std::bitset<n> sieve;
}