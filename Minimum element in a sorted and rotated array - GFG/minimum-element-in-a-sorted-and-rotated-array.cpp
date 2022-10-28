//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        
           int si = 0;
            int ei = n - 1;
            int res=INT_MAX;

            while (si <= ei)
            {
                int mid=(si+((ei-si)/2));
                if (arr[mid] >= arr[si])	//left sorted
                {
                    res=min(res,arr[si]);
                    si=mid+1;
                }
                
                else{
                    res=min(res,arr[mid]);
                    ei=mid-1;
                }
            }
            
            return res;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends