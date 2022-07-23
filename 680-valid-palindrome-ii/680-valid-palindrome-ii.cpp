class Solution {
public:
    bool validPalindrome(string s, int start=0, int end=-1, int cnt=0) {
        end = (end==-1)?s.size()-1:end;
        
        if(cnt > 1)        { return false; }
        if( start>=end )   { return true;  }
        
        while( s[start] == s[end] ) {
            start++;
            end--;
            if( start>=end )
                return true;
        }
        cnt++;
        return validPalindrome(s,start+1, end, cnt) || validPalindrome(s,start, end-1, cnt);
    }
};