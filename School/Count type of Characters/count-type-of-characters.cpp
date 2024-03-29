//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            int small=0;
            int large=0;
            int num=0;
            int special=0;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    small++;
                }
                else if(s[i]>='A' && s[i]<='Z')
                {
                    large++;
                }
                else if (s[i]>='0' &&  s[i] <= '9')
                {
                    num++;
                }
                else
                {
                    special++;
                }
            }
            vector<int> ans;
            ans.push_back(large);
            ans.push_back(small);
            ans.push_back(num);
            ans.push_back(special);
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends