#include <vector>
#include <queue>

class Solution
{
  public:
    int lastStoneWeight(std::vector<int> &stones);
};

int Solution::lastStoneWeight(std::vector<int> &stones)
{
    std::priority_queue<int> pq;

    for (int x : stones)
        pq.push(x);

    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();

        int y = pq.top();
        pq.pop();

        pq.push(x - y);
    }

    if (pq.empty())
        return 0;

    return pq.top();
}
