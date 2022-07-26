class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        int total = accumulate(nums.begin(), nums.end(), 0);
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        vector<int> res;
        int sum = 0, i=0;
        while(sum <= total - sum)
        {
            sum += nums[i];
            res.push_back(nums[i]);
            i++;
        }
        
        return res;
    }
};