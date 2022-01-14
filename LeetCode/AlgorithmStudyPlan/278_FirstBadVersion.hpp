//* The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
  public:
    int firstBadVersion(int n);
};

int Solution::firstBadVersion(int n)
{
    int left = 1, right = n;
    int firstBadVersion = -1;

    while (left <= right)
    {
        long mid = ((long)left + (long)right) / 2;

        if (isBadVersion(mid))
        {
            firstBadVersion = mid;
            right = mid - 1;
        }

        else
            left = mid + 1;
    }

    return firstBadVersion;
}