//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {int n1 = s1.size();
    int n2 = s2.size();

    if (n1 != n2) {
        return false;
    }

    map<char, char> m1, m2;

    for (int i = 0; i < n1; i++) {
        char c1 = s1[i];
        char c2 = s2[i];

        if (m1.find(c1) == m1.end() && m2.find(c2) == m2.end()) {
            m1[c1] = c2;
            m2[c2] = c1;
        }
        // If the current mapping does not match the expected mapping
        else if (m1[c1] != c2 || m2[c2] != c1) {
            return false;
        }
    }
    return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends