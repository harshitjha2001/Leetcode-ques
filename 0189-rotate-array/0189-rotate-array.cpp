class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=1)
            return;
        
        k=k%nums.size();
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin(),nums.end());
        
       
    }
    
    
//     void rotate(vector<int>& nums, int k) {
//         k=k%nums.size();
//         reverse(0,nums.size()-k-1,nums);
//         reverse(nums.size()-k,nums.size()-1,nums);
//         reverse(0,nums.size()-1,nums);
        
//     }

//     void reverse(int start,int end,vector<int>& nums)
//     {
//         while(start<end)
//         {
//             int temp=nums[start];
//             nums[start]=nums[end];
//             nums[end]=temp;
            
//             start++;
//             end--;
//         }
//     }
};