// Link:https://leetcode.com/problems/search-insert-position/
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int high = nums.size() - 1, low = 0, mid;
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (target > nums[mid])
            {
                low = mid + 1;
            }
            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        if (target > nums[mid])
            return mid + 1;
        else
            return mid;
    }
};
// Time Complexity:O(logN)
// Space Complexity:O(1)