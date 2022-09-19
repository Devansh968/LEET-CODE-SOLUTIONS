class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n =  nums.size();
       int ans  =0;
         // return n*(n+1)/2  -  accumulate(nums.begin(),nums.end(),0);
     for(int i = 0;i<n;i++){
          ans ^= (nums[i] ^i);
     }
        ans ^= n;
        return ans;
    
        }
};