//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int maxi=arr[n-1]-k;
        int mini=arr[0]+k;
        int small,big;
        for(int i=0;i<n;i++)
        {
            small=min(mini,arr[i+1]-k);
            big=max(maxi,arr[i]+k);
            if(small<0)
            {
                continue;
            }
            ans=min(ans,big-small);
        }
   return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends