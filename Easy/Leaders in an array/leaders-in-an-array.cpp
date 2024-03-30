//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> result;
        if (n == 0) return result;
        
        int maxRight = a[n - 1]; // Initialize the maximum element found so far as the rightmost element.
        result.push_back(maxRight); // Rightmost element is always a leader.
        
        // Traverse the array from right to left.
        for (int i = n - 2; i >= 0; i--) {
            // If the current element is greater than or equal to the maximum element found so far,
            // it is a leader. Update the maximum element found so far.
            if (a[i] >= maxRight) {
                maxRight = a[i];
                result.push_back(maxRight);
            }
        }
        
        // Reverse the result vector as we stored the leaders in reverse order.
        reverse(result.begin(), result.end());
        
        return result;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends