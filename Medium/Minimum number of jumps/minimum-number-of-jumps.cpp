//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
         int i = 0;
    int jump = 0;
    int count = 0;
    while (jump < n - 1) {
        i = arr[jump];
        if (i == 0) {
            return -1;
        }
        if (jump + i >= n - 1) {
            count++;
            break;
        }
        int maxReach = 0;
        int nextJump = jump;
        for (int k = 1; k <= i; k++) {
            if (jump + k < n && k + arr[jump + k] > maxReach) {
                maxReach = k + arr[jump + k];
                nextJump = jump + k;
            }
        }
        jump = nextJump;
        count++;
    }
    return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends