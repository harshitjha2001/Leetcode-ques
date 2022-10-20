class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int count=0;    // moores voting algo
//         int candidate=0;
        
//         for(int i:nums)
//         {
//             if(count==0)
//             {
//                 candidate=i;
//             }
            
//             if(i==candidate)
//                 count++;
            
//             else
//                 count--;
//         }   
        
//         return candidate;
        
        unordered_map<int,int> mp;
        int n=nums.size();
        int x=n/2;
        
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]>=x)
                return nums[i];
            
            mp[nums[i]]++;
            
            
        }
        return -1;
    }
    
};