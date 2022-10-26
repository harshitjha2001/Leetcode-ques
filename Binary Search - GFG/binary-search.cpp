//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int nums[], int n, int target) {
        // code here
        int si=0;
        int ei=n-1;
        
        while(si<=ei)
        {
            int mid=((si+ei)/2);
            
            if(nums[mid]==target)
                return mid;
            
            if(nums[mid]>target)
                ei=mid-1;
            
            else 
                si=mid+1;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends