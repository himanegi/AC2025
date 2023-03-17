// Link : https://leetcode.com/problems/merge-intervals/
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        vector<int> temp(2);
        temp = intervals[0];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (temp[1] >= intervals[i][0])
            {
                temp[1] = max(intervals[i][1], temp[1]);
            }
            else
            {
                v.push_back(temp);
                temp = intervals[i];
            }
        }
        v.push_back(temp);
        return v;
    }
};
// Time Complexity : O(nlogn)
// Space Complexity : O(n)