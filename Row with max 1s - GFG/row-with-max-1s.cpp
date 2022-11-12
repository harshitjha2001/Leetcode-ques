//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	   // int currentsize =0;
	   // int biggestsize=0;
	   // int row = 0;
	   // int col = 0;
	   // int ans = -1;
	   // while(row < n && col <=m){
	        
	   //     if(arr[row][m-1]==0)
	   //         row++;
	            
	   //     else if(arr[row][col]==1){
	   //         currentsize=m-col;
	   //         if(biggestsize<currentsize){
	   //             biggestsize = currentsize;
	   //            ans= row;
	   //         }
	   //         col=0;
	   //         row++;
	   //     }
	        
	   //     else{
	   //         col++;
	   //     }
	   // }
	   // return ans;
	   
	   int row=0;
	   int col=m-1;
	   int ans=-1;
	   while(row<n && col>=0)
	   {
	       if(arr[row][col]==1)
	       {
	           ans=row;
	           col--;
	       }
	       
	       else
	        row++;
	   }
	   
	   return ans;
	}
	

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends