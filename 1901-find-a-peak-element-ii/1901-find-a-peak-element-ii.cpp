class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int si=0;
        int ei=mat.size()-1;
        
        while(si<=ei)
        {
            int mid=(si+ei)/2;
            
            int rowmax= rowmaxfn(mat[mid],mat[mid].size()-1);
            
            if(mid==0)
            {
                if(mat[mid][rowmax]>mat[mid+1][rowmax])
                    return {mid,rowmax};
            }
            
            if(mid==mat.size()-1)
            {
                if(mat[mid][rowmax]> mat[mid-1][rowmax])
                    return {mid,rowmax};
            }
            
            if(mat[mid][rowmax]>mat[mid+1][rowmax]  && mat[mid][rowmax]> mat[mid-1][rowmax])
            {
                return {mid,rowmax};
            }
            
            if(mat[mid][rowmax]<mat[mid+1][rowmax])
                si=mid+1;
            
            else
                ei=mid-1; 
        }
        
        return {-1,-1};
        
    }
    
    int rowmaxfn(vector<int> arr , int ei)
    {
        int maxi=0;
        for(int i=0;i<=ei;i++)
        {
            if(arr[i]>=arr[maxi])
                maxi=i;
            
        }
        
        return maxi;
    }
};