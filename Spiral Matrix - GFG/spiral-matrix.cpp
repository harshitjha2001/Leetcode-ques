//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int row, int col, int k)
    {
        // Your code goes here
      
            int i = 0, j = 0;
            int xd=1;

            while (i < row && j < col)
            {
                int x = j;
                while (x < col)
                {
                    if(xd==k)
                    return matrix[i][x];
                    x++;
                    xd++;
                    
                }
                i++;

                x = i;
                while (x < row)
                {
                    if(xd==k)
                    return matrix[x][col-1];
                    x++;
                    xd++;
                }
                col--;

                x = col - 1;
                while (x >= j && i < row)
                {
                    
                      if(xd==k)
                    return matrix[row-1][x];
                    x--;
                    xd++;
                }
                row--;

                x = row - 1;
                while (x >= i && j < col)
                {
                
                      if(xd==k)
                    return matrix[x][j];
                    x--;
                    xd++;
                }
                j++;
            }

            return -1;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends