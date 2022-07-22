class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int diff=nums.back()-nums[0];
        return max(diff-2*k,0);
    }
};