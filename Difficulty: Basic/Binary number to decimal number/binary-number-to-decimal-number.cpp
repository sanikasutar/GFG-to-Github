//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
       string num = str;
       int dec_val = 0;
       int len = str.size();
       int base = 1;
       for(int i = len-1; i >= 0; i--)
       {
           if(num[i] =='1')
                dec_val+=base;
            base=base*2;
       }
       return dec_val;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends