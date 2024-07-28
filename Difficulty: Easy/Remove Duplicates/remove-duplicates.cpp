//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        int a[26] = {0};
        int i = 0;
        while(i < str.size())
        {
            if(a[str[i]-'a']==0)
            {
                a[str[i]-'a'] = 1;
                i++;
            }
            else
            {
                str.erase(i,1);
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends