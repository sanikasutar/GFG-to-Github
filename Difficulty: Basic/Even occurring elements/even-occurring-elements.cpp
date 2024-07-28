//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> repeatingEven(int arr[], int n) {
        sort(arr,arr+n);
        vector<int> v;
        int count = 1;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == arr[i+1])
            {
                count++;
            }
            if(arr[i]!=arr[i+1])
            {
                if(count%2 == 0)
                {
                    v.push_back(arr[i]);
                    count = 1;
                }
            }
        }
        if(v.empty()){
            v.push_back(-1);
        }
        return v;
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
        auto ans = ob.repeatingEven(arr, n);
        for (auto ele : ans) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends