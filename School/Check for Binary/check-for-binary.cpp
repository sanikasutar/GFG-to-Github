//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
    int flag = 0;
   for(int i = 0; i < str.size();i++)
   {
       if(str[i]!= '0' && str[i]!='1')
       {
           flag = 1;
           break;
       }
   }
   if(flag == 0)
   {
       return 1;
   }
   return 0;
}