//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
       int diagonalSumDifference(int N, vector<vector<int>> Grid) {
    int sum1 = 0;
    int sum2 = 0;
    
    // Calculate sum of primary diagonal
    for (int i = 0; i < N; i++) {
        sum1 += Grid[i][i];
    }
    
    // Calculate sum of secondary diagonal
    for (int i = N - 1; i >= 0; i--) {
        sum2 += Grid[N - i - 1][i];
    }
    
    return abs(sum1 - sum2);

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}
// } Driver Code Ends