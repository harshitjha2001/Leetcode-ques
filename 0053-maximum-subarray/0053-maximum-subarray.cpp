class Solution {
public:
    int maxSubArray(vector<int>& nums) {
//         int maxsum=INT_MIN;
//         for(int i=0;i<nums.size();i++)
//         {
//             int sum=0;
//             for(int j=i;j<nums.size();j++)
//             {
//                 sum+=nums[j];
//                 if(sum>maxsum)
//                     maxsum=sum;
//             }
//         }
        
//         return maxsum;
        
        
        // kadanes
        int sum=0;
        int max=nums[0];
        
        for(int i:nums)
        {
            sum+=i;
            if(sum>max) max=sum;
            if(sum<0) sum=0;
        }
        
        return max;
        
    }
};