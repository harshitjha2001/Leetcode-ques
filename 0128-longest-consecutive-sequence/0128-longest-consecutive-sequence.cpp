class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map <int,int> x;
        for(int i:nums)
        {
            x[i]++;
        }
        
        int ans=0;
        
        for(int i:nums)
        {
            if(!x.count(i-1))
            {
                int currentnum=i;
                int currentstreak=1;
                
                while(x.count(currentnum+1))
                {
                    currentnum++;
                    currentstreak++;
                }
                
                ans=max(ans,currentstreak);
            } 
        }
        
        return ans;
    }
};