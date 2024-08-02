//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
        int sum = 0;
        // int diff = 0;
        sort(arr,arr+n);
        sum+=(arr[1]-arr[0]);
        for(int i = 1; i < n-1; i++)
        {
            int a = arr[i]-arr[i-1];
            int b = arr[i+1]-arr[i];
            int mini = min(a,b);
            sum+=mini;
        }
        sum+=abs(arr[n-1]-arr[n-2]);
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.sumOfMinAbsDifferences(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends