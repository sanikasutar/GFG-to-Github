//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        string s;
        for(int i = 0; i < n; i++)
        {
            s = s + arr[i];
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        Solution ob;
        
        cout<<ob.chartostr(arr,n)<<endl;

    }
}

// } Driver Code Ends