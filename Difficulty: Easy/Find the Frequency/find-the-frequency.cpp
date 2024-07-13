//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> a, int X){
    unordered_map<int,int> mp;
    int n = a.size();
    for(int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for(auto it : mp)
    {
        if(it.first == X)
        {
            return it.second;
        }
    }
    return 0;
}

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> Arr;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        Arr.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int X;
	    cin >> X;
	    cout << findFrequency(Arr, X) << endl;
	}
	
	return 0;
}
// } Driver Code Ends