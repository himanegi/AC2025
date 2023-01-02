// Link:https://leetcode.com/problems/sort-colors/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int point = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[point]);
                point++;
            }
        }
        for (int i = point; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                swap(nums[i], nums[point]);
                point++;
            }
        }
        for (int i = point; i < nums.size(); i++)
        {
            if (nums[i] == 2)
            {
                swap(nums[i], nums[point]);
                point++;
            }
        }
    }
};

// Time Complexity : O(n)