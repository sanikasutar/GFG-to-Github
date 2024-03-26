//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


string solve(string a) {
    int count = 0;
    unordered_map<char,int> mp;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')
        {
            if(mp.find(a[i])==mp.end())
            {
                mp.insert(make_pair(a[i],1));
            }
            else
            {
                mp[a[i]]++;
            }
        }
    }
    for(auto &it:mp)
    {
        count++;
    }
    if(count%2!=0)
    {
        return "HE!";
    }
    return "SHE!";
}