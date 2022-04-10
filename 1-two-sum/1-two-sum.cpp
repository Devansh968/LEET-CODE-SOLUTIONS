class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int ,int > mp;
        for(int  i=0; i<nums.size();i++){
            
            if(mp.count(target-nums[i])>0)
            
                return {mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
        }    
        return {-1,-1};
      }
    
};
//vector <int > r;
//for(int  i=0;i<nums.size();i++){
//        for(int  j=i+1;j<nums.size();,j++){
  //    if(nums[i]+nums[j]==target){
   //       r = {i,j};
   // }
    //    }
//}