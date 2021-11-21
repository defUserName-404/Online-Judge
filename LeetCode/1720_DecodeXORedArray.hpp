#include <algorithm>
#include <vector>

class Solution
{
  public:
    std::vector<int> decode(std::vector<int> &encoded, int first);
};

std::vector<int> Solution::decode(std::vector<int> &encoded, int first)
{
    std::vector<int> finalArray;
    finalArray.push_back(first);

    for (int i = 0; i < encoded.size(); i++)
        finalArray.push_back(encoded[i] ^ finalArray[i]);

    return finalArray;
}