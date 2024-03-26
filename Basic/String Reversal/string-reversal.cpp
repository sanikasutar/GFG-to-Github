//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
     std::string result;
    bool seen[256] = {false}; // Assuming ASCII characters

    // Traverse the string from end to start
    for (int i = s.length() - 1; i >= 0; i--) {
        // Ignore spaces and characters already seen
        if (s[i] != ' ' && !seen[s[i]]) {
            result.push_back(s[i]); // Append character to result
            seen[s[i]] = true;      // Mark character as seen
        }
    }
    return result;
}