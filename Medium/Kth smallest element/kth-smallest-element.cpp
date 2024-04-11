//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
#include<queue>
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    int kthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int> pq; // max-heap
    
    // Step 1: Insert the first k elements into the max-heap
    for(int i = l; i <= l + k - 1; i++) {
        pq.push(arr[i]);
    }
    
    // Step 2: For each remaining element, if it's smaller than the top element of the max-heap, replace the top element with it
    for(int i = l + k; i <= r; i++) {
        if(arr[i] < pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    // Step 3: The top of the max-heap will be the kth smallest element
    return pq.top();

}

};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends