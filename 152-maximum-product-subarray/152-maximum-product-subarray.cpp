class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int mx = 1;                           // to store continuous curr max multiplication
    int mn = 1;                           // to store continuous curr min multiplication
    int ans = INT_MIN;                    // to store ans
    
    // we check every element is it's negative then swap mx and mn
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