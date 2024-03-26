//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        bool check (string s)
        {
        	int i = s.size();
        	int start = 0;
        	int end = s.size()-1;
        	while(start<=end)
        	{
        	    if(s[start]!=s[end])
        	    {
        	        return false;
        	    }
        	    start++;
        	    end--;
        	}
        	int mid = (i/2);
        	if(s[mid]!=s[0])
        	{
        	    return false;
        	}
        	return true;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends