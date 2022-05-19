class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum =0;
         while(k!=0)
         {
             sort(nums.begin(),nums.end());
             nums[0] = -nums[0];
             k--;
         }
        for(int i=0;i<nums.size();i++)
        {
             sum = sum + nums[i];
            
            
        }
        return sum;
        }
};