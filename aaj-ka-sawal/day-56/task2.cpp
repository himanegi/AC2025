// Link : https://leetcode.com/problems/bag-of-tokens/
class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        if (!tokens.size())
            return 0;
        sort(tokens.begin(), tokens.end());
        int s = 0;
        if (power < tokens[0])
            return s;
        int i = 0, j = tokens.size() - 1;
        int mxs = 0;
        while (i <= j)
        {
            if (tokens[i] <= power)
            {
                power -= tokens[i];
                s++;
                mxs = max(mxs, s);
                i++;
            }
            else if (s > 0)
            {
                power += tokens[j];
                s--;
                j--;
            }
            else
                break;
        }
        return mxs;
    }
};
// Time Complexity: O(nlogn)
// Space Complexity: O(1)