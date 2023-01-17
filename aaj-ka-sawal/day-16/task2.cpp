// Link:https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int high = letters.size() - 1, low = 0;
        char ans = letters[0];
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (target < letters[mid])
            {
                high = mid - 1;
                ans = letters[mid];
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};
// Time Complexity:O(logN)
// Space Complexity:O(1)