//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	

	public:
	long long countXorPair(long long a[], int n)
	{
        // Variables to count odd and even numbers
        long long oddCount = 0;
        long long evenCount = 0;

        // Traverse the array to count odd and even numbers
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        // The number of pairs with odd XOR is the product of odd and even counts
        return oddCount * evenCount;
    }

	
};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];

       

        Solution ob;
        cout << ob.countXorPair(arr, n);
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends