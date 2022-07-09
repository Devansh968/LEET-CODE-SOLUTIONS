class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      int a=s1.length();
        int b=s2.length();
        int i,j;
        for(i=0;i<a;i++){
            if(s1[i]!=s2[i]){
                break;
            }
        }
        for(j=i+1;j<a;j++){
            if(s1[j]!=s2[j]){
                swap(s2[i],s2[j]);
                break;
            }
        }
        if (s1 == s2){
            return true;
        }else{
            return false;
        }
    }
};