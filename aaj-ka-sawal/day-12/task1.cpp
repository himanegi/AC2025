// Link:https://leetcode.com/.../count-prefixes-of-a-given-string/
class Solution
{
public:
    int countPrefixes(vector<string> &words, string s)
    {
        int cnt = 0;
        for (auto i : words)
        {
            if (s.substr(0, i.size()) == i)
                cnt++;
        }
        return cnt;
    }
};
// Time Complexity: O(N*S)
// Space Complexity: O(1)