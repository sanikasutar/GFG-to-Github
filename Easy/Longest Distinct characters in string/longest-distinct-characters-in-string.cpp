//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
     const int size = 256;
    unordered_map<char, int> hash;
    int n = s.size();
    int l = 0;
    int r = 0;
    int maxLen = 0;

    // Initialize the hash map with -1
    for (int i = 0; i < size; ++i) {
       hash[i] = -1;
    }

    while(r < n) {
        if(hash.find(s[r]) != hash.end()) {
            if(hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
        }
        hash[s[r]] = r; // Update the index of the character
        int len = r - l + 1;
        maxLen = max(maxLen, len);
        ++r; // Move to the next character
    }
    return maxLen;
}