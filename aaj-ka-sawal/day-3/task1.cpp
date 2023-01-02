// Link:https://leetcode.com/problems/pascals-triangle/

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> v;
        for (int i = 1; i <= numRows; i++)
        {
            int n = 1;
            vector<int> s;
            for (int j = 1; j <= i; j++)
            {
                s.push_back(n);
                n = n * (i - j) / j;
            }
            v.push_back(s);
        }
        return v;
    }
};

// Time Complexity : O(n^2)