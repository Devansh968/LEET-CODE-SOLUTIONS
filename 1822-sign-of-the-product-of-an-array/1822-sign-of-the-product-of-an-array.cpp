class Solution {
public:
    int arraySign(vector<int>& nums) {
    int p=1;
        for(int n: nums) {
            if(n<0)     p*=-1;
            if(n==0)    return 0;
        }
        return p>0 ? 1 : -1;
    }
};