// Link:https://leetcode.com/problems/sqrtx/
class Solution
{
public:
    int mySqrt(int x)
    {
        int high = x, low = 1, ans;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;
            if (sq < x)
            {
                low = mid + 1;
                ans = mid;
            }
            else if (sq > x)
                high = mid - 1;
            else
                return mid;
        }
        return ans;
    }
};
// Time Complexity:O(logN)
// Space Complexity:O(1)