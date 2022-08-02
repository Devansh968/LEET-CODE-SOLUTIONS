class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int mx = 1;                          
    int mn = 1;                       
    int ans = INT_MIN;                   
    
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            swap(mx,mn);
        }
        mx = max(mx*nums[i],nums[i]);
        mn = min(mn*nums[i],nums[i]);
        
        ans = max(ans,mx);
    }
    return ans;

    }
};