class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  sum  = 0,ma=INT_MIN;
        for(int i =0;i<nums.size();i++){
             sum  += nums[i];
            if(ma<sum){
                ma = sum;
            }
            if(sum<0){
                sum  =0;
            }
        }
        return ma;
    }
};