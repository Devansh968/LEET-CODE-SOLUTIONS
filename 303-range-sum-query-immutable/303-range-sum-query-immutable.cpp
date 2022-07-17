class NumArray {
public:
    
    vector<int> res;
    NumArray(vector<int>& nums) {
        
        res  =  nums;
        
        int sum  =0;
        
        for(int i =0;i<nums.size();i++)
        {
        sum  += res[i];
            
        res[i] =  sum;
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left ==0)  return res[right];
        else  return  res[right]-res[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */