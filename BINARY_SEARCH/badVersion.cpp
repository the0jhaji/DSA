// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int s = 1, e = n;
        int ans = n; // safe initialization

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (isBadVersion(mid))
            {
                ans = mid;   // possible answer
                e = mid - 1; // move left
            }
            else
            {
                s = mid + 1; // move right
            }
        }
        return ans;
    }
};