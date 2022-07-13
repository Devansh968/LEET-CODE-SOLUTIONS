class Solution {
public:
    char findTheDifference(string s, string t) {
  int S=0 , T=0;
        for(int i =0 ; i<t.size() ; i++)
        {
            S+=s[i];
            T+=t[i];
        }
        return T-S;
        
     
    }
};