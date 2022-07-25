class Solution {
public:
    int balancedStringSplit(string s) {
        int r =0;
        int l =0;
        int  res =0;
        for(char x:s)
        {
            if(x=='R')  r++;
            else 
                l++;
            
            if(r==l) res++;
        }
        
    return res;
        
    
    }
};