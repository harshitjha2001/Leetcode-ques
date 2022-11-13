class Solution
{
    public:
        int smallestDivisor(vector<int> &nums, int threshold)
        {
           	//     int left = 1, right = 1e6, m, sum;
           	//     while (left < right)
           	//     {
           	//         m = (left + right) / 2, sum = 0;
           	//         for (int i: nums)
           	//             sum += (i + m - 1) / m;
           	//         if (sum > threshold)
           	//             left = m + 1;
           	//         else
           	//             right = m;
           	//     }
           	//     return left;

            int lo = 1, hi = 1e6, mid = 0;

            while (lo < hi)
            {
                mid = (lo + hi) / 2;
                int sum = 0;
                for (int i = 0; i < nums.size(); i++)
                    sum += ceil(1.0 *nums[i] / mid);
                if (sum > threshold)
                    lo = mid + 1;
                else
                    hi = mid;
            }
            return lo;
        }
};