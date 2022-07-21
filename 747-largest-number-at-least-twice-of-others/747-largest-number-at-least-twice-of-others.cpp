class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
int ind;
for(int i=0;i<nums.size();i++){
if(nums[i]==maxi){
ind=i;
}
}

    int count=0;
    
    for(int i=0;i<nums.size();i++){
        if(ind!=i && maxi>=2*nums[i]){
            count++;
        }
    }
    
    if(count==nums.size()-1)return ind;
    else return -1;
    }
};