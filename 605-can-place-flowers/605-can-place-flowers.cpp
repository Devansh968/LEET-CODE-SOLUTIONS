class Solution {
public:

bool canPlaceFlowers(vector<int>& nums, int n) {
    
    int gap = 0;
    int res = 0;
    
    for(int i=0; i<nums.size(); i++){
        
        if(nums[i] == 1){
            
            if(gap == i){
                res += (gap)/2;
            }
            else{
                res += (gap-1)/2;
            }
            
            gap = 0;
            
        }
        else{
            gap++;
        }
        
    }
    
    
    if(gap == nums.size()){
        res += (gap+1)/2;
    }
    else{
        res += (gap)/2;
    }
    
    return res >= n;
}
};