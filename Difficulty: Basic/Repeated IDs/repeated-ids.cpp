//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueId(int a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans = uniqueId(a, n);
        for (it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<int> uniqueId(int arr[], int n) {
    unordered_map<int, int>m;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(m[arr[i]]==0){
              m[arr[i]]++;
              v.push_back(arr[i]);
            } 
        }
        return v;
}