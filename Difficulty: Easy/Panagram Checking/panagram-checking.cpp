//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string str) {
        vector<bool> mark(26,0);
        int index ;
        for(int i = 0; i < str.length(); i++)
        {
            if('A' <= str[i] && str[i] <='Z')
            {
                index = str[i] - 'A';
            }
            else if('a' <= str[i] && str[i] <= 'z')
            {
                index = str[i] - 'a';
            }
            else
            {
                continue;
            }
            mark[index] = true;
        }
        for(int i = 0; i < 26; i++)
        {
            if(mark[i] == false)
            {
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends