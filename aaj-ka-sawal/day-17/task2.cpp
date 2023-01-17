// Link:https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int findPeakElement(vector<int> &a)
    {
        // Code here.
        int high = a.size() - 1, low = 0;
        int mid = low + (high - low) / 2;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (a[mid] < a[mid - 1])
                high = mid - 1;
            else if (a[mid] < a[mid + 1])
                low = mid + 1;
            else
                return a[mid];
        }
        return a[mid];
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        int ans = ob.findPeakElement(a);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
// Time Complexity:O(logN)
// Space Complexity:O(1)