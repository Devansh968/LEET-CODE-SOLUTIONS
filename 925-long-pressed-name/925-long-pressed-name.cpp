class Solution {
public:
    bool isLongPressedName(string name, string typed) {
          if(name.length() >typed.length())
              return false;
        int i = 0;
        int j = 0;
        while(j<typed.length())
        {
           if(i <name.length()  && name[i] ==typed[j])
           {  
               i++;
           }   
            else if(j==0 || typed[j] != typed[j-1])
            {
                return false;
            }
            j++;
        }
        return i ==name.length();
    }
};