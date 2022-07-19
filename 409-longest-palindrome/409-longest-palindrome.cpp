class Solution {
public:
  int longestPalindrome(string s) {
    
    unordered_map<char,int> mp;
    
    for(auto i : s){
        mp[i]++;
    }
    
    int res = 0;
    bool flag = true;
    
    for(auto it : mp){
        
        if( (it.second & 1) == 0){
            res += it.second;
        }
        else if(flag){
            res += it.second;
            flag = false;
        }
        else{
            res += (it.second)-1;
        }
        
    }
    
    
    return res;
}
};