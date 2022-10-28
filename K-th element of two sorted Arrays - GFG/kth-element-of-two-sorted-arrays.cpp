//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {

    if(m > n) {
        return kthElement(arr2, arr1, m, n, k); 
    }
        
    int low = max(0,k-m); // if k=7 , n =3 and m=6, low cannot be 0 since we wont be able to fullfill the size of k so k need to be max of 0 and k-m in this case 7-6=1
    int high = min(k,n);  // if k=2 , n=4 and m=6 , high cannot be n since n>k in this case it will be high=2
        
    while(low <= high) {
        
        int cut1 = (low + high)/2;  //middle element
        int cut2 = k - cut1; 
        
        int l1,l2,r1,r2;
        
        if(cut1==0)
            l1=INT_MIN;
        else
            l1=arr1[cut1-1];
            
        if(cut2==0)
            l2=INT_MIN;
        else
            l2=arr2[cut2-1];
            
        if(cut1==n)
            r1=INT_MAX;
        else
            r1=arr1[cut1];
            
        if(cut2==m)
            r2=INT_MAX;
        else
            r2=arr2[cut2];
        
      
      
            
        if(l1 <= r2 && l2 <= r1) 
        {
            return max(l1, l2);
        }
        
        else if (l1 > r2) //move left
        {
            high = cut1 - 1;
        }
        
        else //move right
        {
            low = cut1 + 1; 
        }
        
    }
    return 1; 
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends