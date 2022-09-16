class Solution {
public:
    int strStr(string haystack, string needle) {
       int  n = haystack.length();
       int m=   needle.length();
       for(int i=0;i<=n-m;i++){
        string temp = haystack.substr(i,m);
        if(temp == needle) return i;
    }
    return -1;
    }
};