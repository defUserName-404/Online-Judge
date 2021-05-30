class Solution
{
  public:
    int guessNumber(int n);
};

int guess(int n);

int Solution::guessNumber(int n)
{
    int left = 1, right = n;

    while (left <= right)
    {
        int mid = left + (right - 1) / 2;

        int check = guess(mid);

        if (check == 0)
            return mid;
        else if (check == -1)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}