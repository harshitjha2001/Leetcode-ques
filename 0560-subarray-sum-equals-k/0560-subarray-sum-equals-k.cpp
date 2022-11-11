class Solution
{
    public:
        int subarraySum(vector<int> &nums, int k)
        {
           	// Brute-Force Solution T.C->O(N^2) and S.C->O(1)
           	// for(int i = 0; i < n; i++)	// traverse from the array
           	// {
           	//     int sum = nums[i];	// provide sum with arr[i]

           	//     if(sum == k)	// if element itself equal to k, then also increment count
           	//         count++;

           	//     for(int j = i + 1; j < n; j++)	// now moving forward,
           	//     {
           	//         sum += nums[j];	// add elements with sum

           	//         if(sum == k)	// if at any point they become equal to k
           	//             count++;	// increment answer
           	//     }

           	// }

           	// Optimal Solution T.C->O(N) and S.C-> O(N)
            int count = 0;
            int n = nums.size();
            int sum = 0;
            unordered_map<int, int> mp;
            mp[sum] = 1;	//  initially in map[sum]=1
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];

                if (mp.find(sum - k) != mp.end())
                {
                    count += mp[sum - k];
                }
                mp[sum]++;
            }

            return count;
        }
};