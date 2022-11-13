class Solution
{
    public:
        string reverseWords(string s)
        {
            stack<char> st;
            string ans;
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] == ' ')
                {
                    while (!st.empty())
                    {
                        ans += st.top();
                        st.pop();
                    }
                    if(!ans.empty() && ans.back()!=' ')
                     ans += ' ';
                }
                else
                    st.push(s[i]);
            }

            while (!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            
            while(ans.back()==' ')
                ans.pop_back();

            return ans;
        }
};