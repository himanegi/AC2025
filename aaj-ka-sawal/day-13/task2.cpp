// Link:https://leetcode.com/problems/maximum-ice-cream-bars/
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int cnt = 0;
        sort(costs.begin(), costs.end());
        for (auto i : costs)
        {
            if (coins >= i)
            {
                coins -= i;
                cnt++;
            }
            else
                return cnt;
        }
        return cnt;
    }
};
// Time Complexity: O(NlogN)
// Space Complexity: O(1)