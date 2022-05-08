#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution
{
    unsigned int getFrequency(int n, std::vector<int> &arr);

  public:
    int findSpecialInteger(std::vector<int> &arr);
};

// unsigned int Solution::getFrequency(int n, std::vector<int> &arr)
// {
//     auto upperBound = std::upper_bound(arr.begin(), arr.end(), n);
//     auto lowerBound = std::lower_bound(arr.begin(), arr.end(), n);

//     return upperBound - lowerBound;
// }

// //! nlogn solution, no need to check the frequenrcy of each int separately
// int Solution::findSpecialInteger(std::vector<int> &arr)
// {
//     unsigned int maxFreq = 0;
//     size_t n = arr.size();
//     int ans = -1;

//     for (size_t i = 0; i < n; i++)
//     {
//         int currentFreq = getFrequency(arr[i], arr);

//         if (currentFreq > maxFreq)
//         {
//             maxFreq = currentFreq;
//             ans = arr[i];
//         }
//     }

//     return ans;
// }

int Solution::findSpecialInteger(std::vector<int> &arr)
{
    std::unordered_map<int, int> freq;
    size_t n = arr.size();

    for (const auto &x : arr)
    {
        freq[x]++;

        if (freq[x] > n * 0.25)
            return x;
    }

    return -1;
}