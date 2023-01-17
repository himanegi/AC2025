// Link:https://leetcode.com/problems/guess-number-higher-or-lower/
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int high = n, low = 1, mid = -1;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (guess(mid) == 1)
                low = mid + 1;
            else if (guess(mid) == -1)
                high = mid - 1;
            else
                return mid;
        }
        return mid;
    }
};
// Time Complexity:O(logN)
// Space Complexity:O(1)