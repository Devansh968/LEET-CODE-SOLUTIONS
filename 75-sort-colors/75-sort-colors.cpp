class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> m;
        for(int  i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int  i=0;
        for(auto x:m)
        {
          int fre  =  x.second;
            
            while(fre--)
            {
                nums[i]=x.first;
                i++;
            }
        }
    }
};