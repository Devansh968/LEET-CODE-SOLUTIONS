class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans =0;
        
        unordered_map<int,int> m;
        
        for(int  i =0;i<nums.size();i++)
        {
         
        m[nums[i]]++;
        }
        for(auto x: m)
        {
            if(x.second>=2)
                ans= x.first; 
        }
        return  ans;
    }
};