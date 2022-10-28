class Solution
{
    public:
        int singleNonDuplicate(vector<int> &nums)
        {

            
            int si = 0, ei = nums.size() - 1;
            if(ei==0)
                return nums[0];
            if (nums[1] != nums[0])
                return nums[0];

            if (nums[ei] != nums[ei - 1])
                return nums[ei];

            while (si <= ei)
            {
                int mid = si + (ei - si) / 2;

                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                    return nums[mid];

                if (((mid % 2) == 0 && nums[mid] == nums[mid + 1]) or((mid % 2) == 1) && nums[mid] == nums[mid - 1])
            si = mid + 1;

            else
                ei = mid - 1;
        }

    return -1;

}
};