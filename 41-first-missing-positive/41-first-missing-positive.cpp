class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n = nums.size();
    for(int i=0;i<nums.size();i++){
        
        int element =  nums[i];
        if(element>=1 && element <=n){
            int chair  =  element -1;
            
            if(nums[chair] != element){
                
                swap(nums[chair],nums[i]);
                i--;
            }
            
            
        }
        

    }
  for(int i=0;i<nums.size();i++){
      if(i+1 != nums[i])  return i+1;
  }
        return n+1;
        
    }
};