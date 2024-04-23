//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        int n1 = 1;
        int n2 = 1;
        int n3 = 0;
        int mod = 1e9 + 7;
        if(n<3)
        {
            return n1;
        }
        for(int i = 3; i <=n; i++)
        {
            n1 = n1%mod;
            n2 = n2%mod;
            n3 = n1+n2;
            n3 = n3%mod;
            n1 = n2;
            n2 = n3;
        }
        return n2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends