//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    long long countElements(long long a[], long long n) 
    {
        int count = 1;
        for(auto i = 1; i < n; i++)
        {
            for(auto j = i-1; j >= 0; j-- )
            {
                if(a[i] <= a[j])
                {
                    break;
                }
                if(j == 0)
                {
                    count++;
                }
            }
            
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
 {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++)
	        cin>>a[i];
	    Solution ob;
	    cout<<ob.countElements(a, n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends