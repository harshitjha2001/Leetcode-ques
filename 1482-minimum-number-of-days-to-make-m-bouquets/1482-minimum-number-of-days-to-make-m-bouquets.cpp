class Solution
{
    public:

        bool canmake(int mid, vector<int> bloomday, int bouq, int num)
        {
            int count = 0;

            for (int i: bloomday)
            {
                if (i <= mid)
                {
                    count++;

                    if (count == num)
                    {
                        bouq--;
                        count = 0;
                        if (bouq == 0)
                            return true;
                    }
                }
                else count = 0;
            }

            return false;
        }

    int minDays(vector<int> &bloomDay, int m, int k)
    {

        if ( double(m) * k > bloomDay.size())
            return -1;

        int low = 1;
        int high = 1;

        for (int i: bloomDay)
        {
            low = min(i, low);
            high = max(i, high);
        }

        while (low < high)
        {
            int mid = (low + high) / 2;

            if (canmake(mid, bloomDay, m, k))
                high = mid;

            else
                low = mid + 1;
        }

        return low;
    }
};