//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max1,max2;
	    if(arr[0]>arr[1])
	    {
	        max1=arr[0];
	        max2=arr[1];
	    }
	   
	   else if(arr[0]==arr[1])
	   {
	       max1=arr[0];
	       max2=-1;
	   }
	    else
	    {
	        max1=arr[1];
	        max2=arr[0];
	    }
	    
	 
	    for(int i=2;i<n;i++)
	    {
	        if(arr[i]>max1)
	            { int temp=max1;
	                max1=arr[i];
	                max2=temp;}
	            
	       else if(arr[i]<max1 && arr[i]>max2)
	        max2=arr[i];
	        
	    }
	    
	    
	     if(max1==max2)
	        max2=-1;
	        
	    return max2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends