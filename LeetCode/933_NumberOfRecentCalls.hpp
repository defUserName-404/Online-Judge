#include <queue>

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

class RecentCounter
{
  public:
    RecentCounter();

    int ping(int t);

  private:
    std::queue<int> queue;
};

RecentCounter::RecentCounter()
{
}

int RecentCounter::ping(int time)
{
    queue.push(time);

    while (queue.front() < time - 3000)
        queue.pop();

    return queue.size();
}