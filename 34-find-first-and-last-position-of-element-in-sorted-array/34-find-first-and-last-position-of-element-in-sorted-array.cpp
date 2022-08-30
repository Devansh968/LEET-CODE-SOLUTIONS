class Solution {
public:
    int solve(vector<int>nums,int target,int tog){
        int ans =-1;
        int l  =0;
        int h = nums.size()-1;
        while(l<=h){
            int  mid  = l+(h-l)/2;
            if(nums[mid]>target){
              h  = mid-1;
            }
            else if(nums[mid]<target){
                l = mid+1;
            }
            else{
                ans =  mid;
                if(tog==-1) h = mid+tog;
                else l =  mid+tog;
            }
        }
        return ans;
        
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> v;
         v.push_back(solve(nums,target,-1));
          v.push_back(solve(nums,target,1));
        
        return v;
    }

    
};