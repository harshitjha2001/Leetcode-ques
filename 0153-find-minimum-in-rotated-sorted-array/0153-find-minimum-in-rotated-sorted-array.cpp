class Solution
{
    public:
        int findMin(vector<int> &arr)
        {

            int si = 0;
            int ei = arr.size() - 1;
            int res=INT_MAX;

            while (si <= ei)
            {
                int mid=(si+((ei-si)/2));
                if (arr[mid] >= arr[si])	//left sorted
                {
                    res=min(res,arr[si]);
                    si=mid+1;
                }
                
                else{
                    res=min(res,arr[mid]);
                    ei=mid-1;
                }
            }
            
            return res;
        }
};