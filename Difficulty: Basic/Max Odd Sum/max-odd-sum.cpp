//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long int findMaxOddSubarraySum(long long int a[], long long int n)
    {
          long long sum=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                sum+=a[i];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
               mini=min(mini,abs(a[i]));
            }
        }
        
        return INT_MAX==mini?-1:sum%2!=0?sum:sum-mini;
    }

};

//{ Driver Code Starts.


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;    
        cout <<ob.findMaxOddSubarraySum(arr, n);
        cout<<endl;
    }

    
    return 0;
}
// } Driver Code Ends