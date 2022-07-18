class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string > table;
        int ptr1 = 0, ptr2 = 0;
        vector<string> ve; 
        map <string , bool> check;
        string temp="";
        for(int i=0 ; i<s.length() ; i++)
        {
             if(s[i] == ' ')
             {
                 ve.push_back(temp);
                 temp="";
                 continue ;
             }
             else temp+=s[i];
        }
        if (temp.length()>0)
            ve.push_back(temp);
        if (ve.size() != pattern.length())
            return false;
        while (ptr1 < pattern.length() && ptr2 < ve.size())
        {
            
            if (table[pattern[ptr1]]!="")
            {
                if (table[pattern[ptr1]] != ve[ptr2])
                {
                    return false;
                }
            }
            else
            {
                if (check[ve[ptr2]] == true)
                    return false;
               else
               {
                   check[ve[ptr2]] =true;
                   table[pattern[ptr1]] = ve[ptr2];
               }
            }
            ptr1++;
            ptr2++;
        }
       
     return true;
    }
};