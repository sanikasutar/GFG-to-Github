//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int n)
{
    string res = "";
   while(n>0)
   {
       int rem = n%2;
       if(rem == 1)
       {
           res+='1';
       }
       else
       {
           res+='0';
       }
       n=n/2;
   }
   reverse(res.begin(),res.end());
   cout<<res;
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends