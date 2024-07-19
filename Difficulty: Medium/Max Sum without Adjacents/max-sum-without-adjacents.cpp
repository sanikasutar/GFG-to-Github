//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
    int solveTab(int nums[], int n)
    {
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i < n; i++)
        {
            int incl = dp[i-2] + nums[i];
            int excl = dp[i-1];
            dp[i] = max(incl, excl);
        }
        return dp[n-1];
    }
public:    
    // calculate the maximum sum without adjacent
    int findMaxSum(int *arr, int n) {
       return solveTab(arr, n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends