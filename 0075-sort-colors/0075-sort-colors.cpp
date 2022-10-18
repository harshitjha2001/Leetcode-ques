class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            int n = nums.size();
//             int c1, c2, c3;
//             c1 = c2 = c3 = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if (nums[i] == 0)
//                 {
//                     c1++;
//                 }

//                 if (nums[i] == 1)
//                 {
//                     c2++;
//                 }

//                 if (nums[i] == 2)
//                 {
//                     c3++;
//                 }
//             }

//             for (int i = 0; i < c1; i++)
//             {
//                 nums[i] = 0;
//             }

//             for (int i = c1; i < c1 + c2; i++)
//             {
//                 nums[i] = 1;
//             }

//             for (int i = c1 + c2; i < n; i++)
//             {
//                 nums[i] = 2;
//             }
            
            int high=nums.size()-1;
            int mid=0;
            int low=0;
            
            while(mid<=high)
            {
                if(nums[mid]==0)
                {
                    swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                }
                
                else if(nums[mid]==1)
                    mid++;
                
                else 
                {
                    swap(nums[mid],nums[high]);
                    high--;
                }
                
            }
        }
};