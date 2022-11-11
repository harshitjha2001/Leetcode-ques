class Solution
{
    public:

        string longestCommonPrefix(vector<string> &strs)
        {
            string ans;
            if (strs.size() == 1)
            {
                return strs[0];
            }
            int idx=INT_MAX;
            int y=INT_MAX;
            int mlen= min(strs[0].length(), strs[1].length());
            for (int i = 0; i < strs.size() - 1; i++)
            {
                int x=0;
                int len = min(strs[0].length(), strs[i + 1].length());
                cout << len << " ";
                
                if(strs[i+1]=="")
                {
                    return "";
                }
              
                for (int j = 0; j < len; j++)
                {
                    
                    if (strs[0][j] != strs[i + 1][j])
                    {
                        idx = min(j, idx);
                        break;
                    }
                    else
                    {x++;
                    idx=min(y,x); }
                }
                y=idx;
          
                   
            }
            cout << idx;
          
            return strs[0].substr(0, idx);
        }
};