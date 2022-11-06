class Solution
{
    public:
       	// bool check(string s, int si, int ei)
       	// {
       	//     if (si >= ei)
       	//     {
       	//         return true;
       	//     }
       	//     if (s[si] != s[ei])
       	//     {
       	//         return false;
       	//     }
       	//     return check(s, si + 1, ei - 1);
       	// }
       	// bool isPalindrome(string s)
       	// {
       	//         string t;
       	//         for (int i = 0; i < s.length(); i++)
       	//         {
       	//             if (isalpha(s[i]) || isdigit(s[i]))
       	//             {
       	//                 if (isupper(s[i]))
       	//                 {
       	//                     t += tolower(s[i]);
       	//                 }
       	//                 else
       	//                 {
       	//                     t += s[i];
       	//                 }
       	//             }
       	//         }

       	//         return check(t, 0, t.length() - 1);
       	// }

        bool isPalindrome(string s)
        {
            string k;
        
            for (int i = 0; i < s.length(); i++)
            {
                if (isupper(s[i]) )
                {
                    k+= tolower(s[i]);
                    
                }
                else if (islower(s[i]) || isdigit(s[i]))
                {
                    k+= s[i];
                
                }
            }
           	for (int j = 0; j < k.length(); j++)
           	{
           	    if (k[j] != k[k.length() - j - 1])
           	        return false;
           	}

            return true;
        }
};