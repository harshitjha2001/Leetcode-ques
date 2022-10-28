//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int bs(int arr[],int n,int target)
	{
	    int si=0;
	    int ei=n-1;
	    
	    while(si<=ei)
	    {
	        int mid=(si+ei)/2;
	        
	        if(arr[mid]==target)
	            return mid;
	            
	        else if(arr[mid]<target)
	            si=mid+1;
	            
	        else
	            ei=mid-1;
	    }
	    
	    return -1;
	}
	
	
	int count(int arr[], int n, int x) {
	    // code here
	    int foundat=bs(arr,n,x);
	    
	    if(foundat==-1)
	      return 0;
	      
	    int count=0;
	    int i=foundat;
	    
	    while(i>=0 && arr[i]==x)
	    {
	        count++;
	        i--;
	    }
	    
	    i=foundat+1;
	    
	    while(i<n && arr[i]==x)
	    {
	        count++;
	        i++;
	    }
	    
	    
	    return count;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends