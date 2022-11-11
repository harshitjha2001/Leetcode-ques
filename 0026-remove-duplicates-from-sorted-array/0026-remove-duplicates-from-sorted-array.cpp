class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int count = 0;
            
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] != nums[count])
                {
                    count++;
                    nums[count] = nums[i];
                }
            }
            
            if (nums.empty())
            {
                return count;
            }
            
            else
            {
                return count + 1;
            }
        }
};