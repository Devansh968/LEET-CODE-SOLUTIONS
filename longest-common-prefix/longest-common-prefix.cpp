class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans  = "";
     string str = strs[0];
        
        for(int  i  =0;i<str.size();i++){
            for(int j  =0;j<strs.size();j++){
                if(strs[j][i] != str[i] )
                    return ans;
                
            }
            ans.push_back(str[i]);
        }
        return  ans;
    
    }
};