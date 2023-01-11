// Link:https://leetcode.com/problems/intersection-of-two-arrays/
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        for (auto i : nums1)
        {
            m[i] = 1;
        }
        vector<int> v;
        for (auto i : nums2)
        {
            if (m[i] == 1)
            {
                v.push_back(i);
                m[i] = 0;
            }
        }
        return v;
    }
};
// Time Complexity: O(N)
// Space Complexity: O(N)