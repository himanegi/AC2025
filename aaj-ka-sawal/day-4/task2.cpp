// Link:https://leetcode.com/problems/rotate-image/
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (i <= j)
                    swap(matrix[i][j], matrix[j][i]);
            }
            for (int j = 0, k = matrix[i].size() - 1; j < matrix[i].size() / 2; j++, k--)
            {
                swap(matrix[i][j], matrix[i][k]);
            }
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity: O(1)