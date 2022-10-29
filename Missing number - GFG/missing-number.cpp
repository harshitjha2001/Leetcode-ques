//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int nums[], int x)
{
    // Your code goes here
        
        int sum=0;
        for(int i=0;i<x-1;i++)
        {
            sum+=nums[i];
        }
        
        int sum1= (x*(x+1))/2;
        return (sum1-sum);
}