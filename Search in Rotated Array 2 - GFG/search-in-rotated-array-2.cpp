//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& nums, int target) {
        // Code here
        
        int si = 0;
        int ei = N - 1;
        
        while(si <= ei)
        {
            int mid = si + (ei-si) / 2;
            if (nums[mid] == target)
                return true;
			
            if((nums[si] == nums[mid]) && (nums[ei] == nums[mid]))//duplicate
            {
                si++;
                ei--;
            }
			
            else if(nums[si] <= nums[mid])
            {
                if((nums[si] <= target) && (nums[mid] > target))
                    ei = mid - 1;
                else
                    si = mid + 1;
            }
			
            else
            {
                if((nums[mid] < target) && (nums[ei]>= target))
                    si = mid + 1;
                else
                    ei = mid - 1;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends