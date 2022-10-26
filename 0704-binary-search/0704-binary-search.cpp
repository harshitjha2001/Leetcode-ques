class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int si=0;
        int ei=nums.size()-1;
        
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