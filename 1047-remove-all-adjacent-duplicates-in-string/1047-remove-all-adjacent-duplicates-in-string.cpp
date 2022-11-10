class Solution {
public:
    string removeDuplicates(string s) {
        string st;
        
        for(char i : s)
        {
            if(st.empty())
                st.push_back(i);
            
            else if(st.back()==i)
                st.pop_back();
            else
                st.push_back(i);
        }
        
       return st;        
       
    }
};