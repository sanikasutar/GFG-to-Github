//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) 
	{ vector<int> A(s.size(), 0); // Use s instead of str
    int j = 0; // Length of previous longest prefix suffix
    int i = 1; // Current position in the string

    while (i < s.size()) {
        if (s[i] == s[j]) {
            j++;
            A[i] = j; // Store the length of the prefix
            i++;
        } else {
            if (j == 0) {
                A[i] = 0; // No prefix found
                i++;
            } else {
                j = A[j - 1]; // Fallback to the previous prefix
            }
        }
    }
    
    return A.back();
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends