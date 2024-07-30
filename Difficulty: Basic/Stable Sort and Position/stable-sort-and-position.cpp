//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	
	
	public:
	int getIndexInSortedArray(int arr[], int n, int index)
	{
	     long x = arr[index];
        int c=0,t=0;
        for(int i=0;i <= index;i++){
            if(arr[i] == x)
                c++;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i] == x)
                t++;
            if(arr[i] == x && t == c){
                return i;
            }
            
        }
        return -1;


	}
		 

};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i)
        	cin>>a[i];


        
        Solution ob;
        cout << ob.getIndexInSortedArray(a,n,k);
        
	    cout << "\n";
	     
    }
    return 0;
}




// } Driver Code Ends