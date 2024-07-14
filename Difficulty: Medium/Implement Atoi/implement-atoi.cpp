//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
         //Your code here
        int neg=1;int i=0;
        if(s[0]=='-'){i++; neg=-1;}
        
        int ans=0;
        for(i;i<s.size();i++)
        {
            if( s[i]<='9' and s[i]>='0')
            ans=ans*10+s[i]-48;
            else
            return -1;
        }
        return ans*neg;
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
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends