//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>nums, int N, int target)
    {
        // code here
        
        int si=0;
        int ei=N-1;
        int ans=0;
        while(si<=ei)
        {
            int mid=((si+ei)/2);
            
            if(nums[mid]==target)
                return mid;
            
            if(nums[mid]>target)
               ei=mid-1;
             
            else 
               { si=mid+1;
                ans=mid+1;}
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends