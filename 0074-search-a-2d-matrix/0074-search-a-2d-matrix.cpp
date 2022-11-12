class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {

           	        int row= matrix.size();
           	        int col=matrix[0].size();

           	        int low=0;
           	        int high=(row*col)-1;

           	        while(low<=high)
           	        {
           	            int mid = ((high+low)/2);
           	            if(matrix[mid/col][mid % col] == target) {    	//mid/col = req row  &mid%col= req col
           	                return true;
           	            }
           	            if(matrix[mid/col][mid % col] < target) {
           	                low = mid + 1;
           	            }
           	            else {
           	                high = mid - 1;
           	            }
           	         }

           	        return false;

//             int row = 0;
//             int col = matrix[0].size() - 1;

//             while (row < matrix.size() && col >= 0)
//             {
//                 if (matrix[row][col] == target)
//                     return true;

//                 else if (matrix[row][col] < target)
//                     row++;

//                 else
//                     col--;
//             }

//             return false;
        }
};