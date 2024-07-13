//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
         sort(arr,arr+n);
        for(int i=n-1;i>1;i--) {
            int start = 0;
            int end= i-1;
            while(start<end) {
                if(arr[start] + arr[end] + arr[i] == x) return 1;
                else if(arr[start] + arr[end] + arr[i] < x) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends