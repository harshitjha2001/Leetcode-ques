class Solution
{
    public:
        void setZeroes(vector<vector < int>> &a)
        {

            int col1 = 1;
            int row = a.size();
            int col = a[0].size();

            for (int i = 0; i < row; i++)
            {
                if (a[i][0] == 0)
                    col1 = 0;

                for (int j = 1; j < col; j++)
                {
                    if (a[i][j] == 0)
                    {
                        a[i][0] = 0;
                        a[0][j] = 0;
                    }
                }
            }

            for (int i = row - 1; i >= 0; i--)
            {
                for (int j = col - 1; j >= 1; j--)
                {
                    if (a[i][0] == 0 || a[0][j] == 0)
                        a[i][j] = 0;
                }

                if (col1 == 0)
                    a[i][0] = 0;
            }
        }
};