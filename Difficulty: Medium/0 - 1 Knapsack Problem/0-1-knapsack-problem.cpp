//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
   public:
    int solveMem(vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int>>& dp) {
        if(index == 0) {
            if(weight[0] <= capacity) {
                return value[0];
            } else {
                return 0;
            }
        }
        if(dp[index][capacity] != -1) {
            return dp[index][capacity];
        }
        int include = 0;
        if(weight[index] <= capacity) {
            include = value[index] + solveMem(weight, value, index - 1, capacity - weight[index], dp);
        }
        int exclude = 0 + solveMem(weight, value, index - 1, capacity, dp);
        return dp[index][capacity] = max(include, exclude);
    }

    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) {
        vector<int> weight(wt, wt + n);
        vector<int> value(val, val + n);
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        return solveMem(weight, value, n - 1, W, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends