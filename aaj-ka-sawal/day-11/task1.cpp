// Link:https://leetcode.com/problems/duplicate-zeros/
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        vector<int> v(arr.size());
        for (int i = 0, j = 0; i < arr.size(); i++, j++)
        {
            v[i] = arr[j];
            if (arr[j] == 0)
                i++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            arr[i] = v[i];
        }
    }
};
// Time Complexity: O(N)
// Space Complexity: O(N)