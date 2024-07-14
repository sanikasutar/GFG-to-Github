//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(int n, string arr[]) {
        if(n == 0)
        {
            return "";
        }
        if(n==1)
        {
            return arr[0];
        }
        sort(arr,arr+n);
        int mini = min(arr[0].size(),arr[n-1].size());
        string first = arr[0];
        string last = arr[n-1];
        int i = 0;
        while(i < mini && first[i] == last[i])
        {
            i++;
        }
        string prefix = first.substr(0,i);
        if(prefix.size() == 0)
        {
            return "-1";
        }
        return prefix;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix(n, arr) << endl;
    }
}

// } Driver Code Ends