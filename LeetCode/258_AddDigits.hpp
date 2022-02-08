class Solution
{
  public:
    int addDigits(int num);
};

int Solution::addDigits(int num)
{
    int temp = 0;

    while (num > 0)
    {
        temp += (num % 10);
        num /= 10;
    }

    if (temp >= 10)
        return addDigits(temp);

    return temp;
}