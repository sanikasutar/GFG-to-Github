//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int minProduct(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
         long mod = 1000000007;
        long prod = 1;
        for(int i=0; i<k && i<arr.size(); i++)
        {
            prod = (prod * arr[i]) % mod;

        }

        return (int)prod;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minProduct(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends