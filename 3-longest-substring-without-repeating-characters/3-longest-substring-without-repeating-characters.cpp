class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>window;
        int left = 0 , right = 0 , res;
        
        while(right<s.size())
        {
            
            char c = s[right];
            window[c]++;
            
            while(window[c]>1)
            {
                char d = s[left];
                left++;
                window[d]--;
            }
            
             right++;
            
            res = max(res,right-left);
        }
        
        return res;
        
        
    }
};