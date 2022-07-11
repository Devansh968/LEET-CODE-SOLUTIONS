class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0;
        int size = nums.size();
        for(int  i=0;i<size;i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
            
        }
        for(;j<size;j++)
        {
             nums[j]=0;
        }
    }
};