// Link:https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends

int convertFive(int n)
{
    // Your code here
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '0')
            s[i] = '5';
    return stoi(s);
}

// Time Comlexity : O(n)
// Space Complexity : O(n)
