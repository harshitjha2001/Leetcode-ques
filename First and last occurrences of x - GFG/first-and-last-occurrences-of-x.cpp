//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int target )
{
    // code here
    
    vector<int> res(2,-1);
        
        int si=0;
        int ei=n-1;
        
        
        while(si<=ei)  //for first occurence
        {
            int mid=(si+ei)/2;
            if(arr[mid]==target)
            {
                res[0]=mid;
                ei=mid-1;
            }
            
            else if(arr[mid]<target)
            {
                si=mid+1;
            }
            
            else{
                ei=mid-1;
            }
        }
        
        
        si=0;
        ei=n-1;
        
        while(si<=ei)
        {
            int mid=(si+ei)/2;
            
            if(arr[mid]==target)
            {
                res[1]=mid;
                si=mid+1;
            }
            
            else if(arr[mid]>target)
            {
                ei=mid-1;
            }
            
            else{
                si=mid+1;
            }
            
        }
        
        return res;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends