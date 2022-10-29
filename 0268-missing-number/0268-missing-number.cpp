class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int x=nums.size();
        int sum=0;
        for(int i=0;i<x;i++)
        {
            sum+=nums[i];
        }
        
        int sum1= (x*(x+1))/2;
        return (sum1-sum);
        
    }
};