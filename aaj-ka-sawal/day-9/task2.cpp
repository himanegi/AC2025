// Link:https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int primeSum(int N)
    {
        // code here
    }
};
// User function Template for C++

class Solution
{
public:
    int primeSum(int n)
    {
        // code here
        int sum = 0;
        while (n)
        {
            if (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
                sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.primeSum(N) << "\n";
    }
    return 0;
}
// } Driver Code Ends
// Time Complexity: O(logN)
// Space Complexity: O(1)