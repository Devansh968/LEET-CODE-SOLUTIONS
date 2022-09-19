class Solution {
public:
    int hammingDistance(int x, int y) {
    int  sum = x^y;
    int count =0;
     while(sum>0){
          count =  count+(sum&1);
         sum>>=1;
     }
        return count;
    }
};