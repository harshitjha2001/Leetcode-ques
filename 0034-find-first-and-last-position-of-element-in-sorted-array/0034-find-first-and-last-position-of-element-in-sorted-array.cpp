class Solution
{
    public:
        vector<int> searchRange(vector<int> &nums, int target)
        {

            vector<int> res(2, -1);
            int start = 0, mid = 0, end = nums.size() - 1;

            while (start <= end)
            {
                mid = start + (end - start) / 2;
                if (nums[mid] < target)
                    start = mid + 1;
                else
                {
                    if (nums[mid] == target)
                        res[0] = mid;
                    end = mid - 1;
                }
            }
            start = 0, end = nums.size() - 1;
            while (start <= end)
            {
                mid = start + (end - start) / 2;
                if (nums[mid] > target)
                    end = mid - 1;
                else
                {
                    if (nums[mid] == target)
                        res[1] = mid;
                    start = mid + 1;
                }
            }
            return res;
        }
};