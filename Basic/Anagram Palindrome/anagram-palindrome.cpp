//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    unordered_map<char, int> mp;
    for (char c : S) {
        mp[c]++;
    }

    int oddCount = 0;
    for (auto &itr : mp) {
        if (itr.second % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount <= 1) {
        return 1;
    } else {
        return 0;
    }
}