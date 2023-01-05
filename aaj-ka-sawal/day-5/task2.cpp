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

// Time Complexity : O(logN)
// Space Complexity : O(n)

// Method 2 : Space Complexity : O(1)

int convertFive(int n)
{
    // Your code here
    int k = n, num = 0;
    while (k)
    {
        if (k % 10 == 0)
            num = num * 10 + 5;
        else
            num = num * 10 + k % 10;
        k /= 10;
    }
    int rev = 0;
    while (num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}