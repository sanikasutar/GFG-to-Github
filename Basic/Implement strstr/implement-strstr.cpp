//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     int n = s.size()-x.size();
     for(int i = 0; i <= n; i++)
     {
         if(s[i]==x[0])
         {
             if(s.substr(i,x.size()) == x)
             {
                 return i;
             }
         }
     }
     return -1;
}