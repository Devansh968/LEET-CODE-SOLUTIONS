class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
      map<int,int> m;
        
        for(int  i = 0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
        }
        for(auto j : m)
        {
            if(j.second>1) return true;
        }
        return false;
    }
};