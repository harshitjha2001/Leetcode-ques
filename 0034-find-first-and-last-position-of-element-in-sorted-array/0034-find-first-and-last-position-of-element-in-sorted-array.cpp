class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> res(2,-1);
        
        int si=0;
        int ei=arr.size()-1;
        
        
        while(si<=ei)  //for first occurence
        {
            int mid=(si+ei)/2;
            if(arr[mid]==target)
            {
                res[0]=mid;
                ei=mid-1;
            }
            
            else if(arr[mid]<target)
            {
                si=mid+1;
            }
            
            else{
                ei=mid-1;
            }
        }
        
        
        si=0;
        ei=arr.size()-1;
        
        while(si<=ei)
        {
            int mid=(si+ei)/2;
            
            if(arr[mid]==target)
            {
                res[1]=mid;
                si=mid+1;
            }
            
            else if(arr[mid]>target)
            {
                ei=mid-1;
            }
            
            else{
                si=mid+1;
            }
            
        }
        
        return res;
        
    }
};