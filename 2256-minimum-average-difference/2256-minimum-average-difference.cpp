// class Solution {
// public:
//     int minimumAverageDifference(vector<int>& nums) {
//         vector<double> prefixs;
//         prefixs.push_back(0);
//         for(int i:nums)
//         {
//             prefixs.push_back(prefixs.back()+ i);
//         }
       
//         for(double i:prefixs)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//         int ans=INT_MAX;
//         int retindx=0;
//         int y;
//         for(int i=1;i<prefixs.size();i++)
//         {   
            
//             if(nums.size()-i==0)
//              y=1;
//             else 
//             y=(nums.size()-i) ;
            
//             int x=((prefixs[nums.size()]-prefixs[i])/(y))  -   (prefixs[i]/i);
            
//             if(x<0)
//                 x=x*-1;
            
//             cout<<x<<" ";
//             if(x<ans)
//             {
//                 retindx=i-1;
//                 ans=x;
                
//             }
            
//         }
//          return retindx;
//     }
// };

class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans = 0, n = nums.size(), mi = INT_MAX;
       
        vector<long long> pref(n);
   
        pref[0] = nums[0];
        
        for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + nums[i];
       
        for (int i = 0; i < n; i++) {
           
            long long k = abs((pref[i] / (i + 1)) - ((pref[n - 1] - pref[i]) / max(n - i - 1, 1)));
        
            if (k < mi) {
                mi = k;
                ans = i;
            }
        }
        return ans;
    }
};