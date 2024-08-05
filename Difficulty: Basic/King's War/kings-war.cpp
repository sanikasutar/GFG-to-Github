//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
        \long long SoldierRequired(long long arr[], long long n)
    {
        sort(arr,arr+n);
        int mini = arr[0];
        int maxi = arr[n-1];
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i]==mini || arr[i]==maxi)
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.SoldierRequired(a, n)<<endl;
    }
	return 0;
}
// } Driver Code Ends