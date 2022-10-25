//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
      //Your code here
      unordered_map<int,int> x;
      for(int i=0;i<n;i++)
        x[a[i]]++;
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(!x.count(a[i]-1))
            {
                int currentnum=a[i];
                int currentstreak=1;
                
                while(x.count(currentnum+1))
                {
                    currentnum++;
                    currentstreak++;
                }
                
                ans=max(ans,currentstreak);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends