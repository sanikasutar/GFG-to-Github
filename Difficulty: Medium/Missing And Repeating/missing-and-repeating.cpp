//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> a, int n) {
        vector<int> result(2);
        vector<bool> seen(n + 1, false);
        
        int repeating = -1;
        int missing = -1;

        // Traverse the array to find the repeating element
        for (int i = 0; i < n; ++i) {
            if (seen[a[i]]) {
                repeating = a[i];
            }
            seen[a[i]] = true;
        }

        // Find the missing element by checking which index is not marked
        for (int i = 1; i <= n; ++i) {
            if (!seen[i]) {
                missing = i;
                break;
            }
        }

        result[0] = repeating;
        result[1] = missing;
        return result;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends