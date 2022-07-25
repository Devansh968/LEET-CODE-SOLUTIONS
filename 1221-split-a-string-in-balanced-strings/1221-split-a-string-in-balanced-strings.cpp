class Solution {
public:
    int balancedStringSplit(string s) {
        int i=0,j=0,r=0,l=0,count=0;
        while(j<s.length()){
            if(s[j]=='R') r++;
            else l++;
            if(r==l){
                i=j+1;
                j++;
                r=0;
                l=0;
                count++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};
