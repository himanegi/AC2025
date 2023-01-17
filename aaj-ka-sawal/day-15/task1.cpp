// Link:https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int high = n, low = 1, ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isBadVersion(mid))
            {
                high = mid - 1;
                ans = mid;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};
// Time Complexity:O(logN)
// Space Complexity:O(1)