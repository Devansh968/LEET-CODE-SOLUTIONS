class Solution {
public:
    void reverseString(vector<char>& s) {
        int right  =0;
        int left = s.size()-1;
        
        while(right<left)
            
        {
            char c  = s[left];
            s[left] = s[right];
            s[right] =c;
            
            right += 1;
            left -= 1;
        }
       
    }
};