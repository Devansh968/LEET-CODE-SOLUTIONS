class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        for(int i = 0;i<nums.size();i++)
        {
        int currnum = nums[i];
        v.push_back(currnum);
        }
        for(int j= 0;j<nums.size();j++)
        {
    v[j]  = v[j]*v[j];        
    
        }
        sort(v.begin(),v.end());
    return v;
    }
};