class Solution
{
  public:
    int numWaterBottles(int numBottles, int numExchange);
};

int Solution::numWaterBottles(int numBottles, int numExchange)
{
    int total = numBottles;

    while (numBottles >= numExchange)
    {
        int remainingBottles = numBottles % numExchange;
        int gotBottles = (numBottles - remainingBottles) / numExchange;
        total += gotBottles;
        numBottles = remainingBottles + gotBottles;
    }

    return total;
}