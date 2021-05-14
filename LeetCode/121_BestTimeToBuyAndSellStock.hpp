#include <iostream>
#include <vector>

class Solution
{
  public:
    int maxProfit(std::vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = INT32_MAX;

        int n = prices.size();

        for (int i = 0; i < n; i++)
        {
            min_price = std::min(min_price, prices[i]);

            max_profit = std::max(max_profit, prices[i] - min_price);
        }

        return max_profit;
    }
};