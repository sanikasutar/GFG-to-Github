//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
       unordered_map<char,int> m;
       for(int i = 0; s[i]; i++)
       {
           if(m.find(s[i]) == m.end())
           {
               m.insert(make_pair(s[i],1));
           }
           else
           {
               m[s[i]]++;
           }
       }
       
       for( auto& it:m)
       {
           if(it.second>1)
           {
               return 0;
           }
       }
       return 1;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends