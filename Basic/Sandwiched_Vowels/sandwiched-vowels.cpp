//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:

    string Sandwiched_Vowel(string s){
        if(s.length()<3)
        {
            return s;
        }
        for(int i=0; i < s.length()-2; i++)
        {
            if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') &&
            (s[i+2]!='a' && s[i+2]!='e' && s[i+2]!='i' && s[i+2]!='o' && s[i+2]!='u') &&
            (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'))
            {
                s[i+1]=0;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends