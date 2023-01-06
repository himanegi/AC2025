// Link:https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K)
    {
        // Your code here
        int high = N, low = 0;
        while (low <= high)
        {
            int med = (high + low) / 2;
            if (K > arr[med])
            {
                low = med + 1;
            }
            else if (K < arr[med])
            {
                high = med - 1;
            }
            else
                return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(void)
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

// } Driver Code Ends

// Time Complexity : O(logN)
// Space Complexity : O(1)