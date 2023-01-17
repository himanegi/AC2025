// Link:https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int mx = INT_MIN;
        for (int i = 0; i < sentences.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                    count++;
                mx = max(count, mx);
            }
        }
        return mx + 1;
    }
};
// Time Complexity:O(N^2)
// Space Complexity:O(1)