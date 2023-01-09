// Link:https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here
        int k = 0;
        vector<string> s;
        string p = "";
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '.')
            {
                s.push_back(p);
                p = "";
            }
            else
            {
                p += S[i];
            }
        }
        s.push_back(p);
        reverse(s.begin(), s.end());
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            str += s[i];
            str += '.';
        }
        str.erase(str.size() - 1);
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends
// Time Complexity: O(N)
// Space Complexity: O(N)