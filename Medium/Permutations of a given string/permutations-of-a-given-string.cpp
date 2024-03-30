//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		void backtrack(string& s, vector<string>& result, string& current, vector<bool>& used) {
        if (current.length() == s.length()) {
            result.push_back(current);
            return;
        }
        
        for (int i = 0; i < s.length(); i++) {
            if (used[i] || (i > 0 && s[i] == s[i - 1] && !used[i - 1])) continue; // Skip duplicates
            used[i] = true;
            current.push_back(s[i]);
            backtrack(s, result, current, used);
            current.pop_back();
            used[i] = false;
        }
    }
    
    vector<string> find_permutation(string S) {
        vector<string> result;
        string current;
        vector<bool> used(S.length(), false);
        sort(S.begin(), S.end()); // Sort the input string to handle duplicates
        backtrack(S, result, current, used);
        return result;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends