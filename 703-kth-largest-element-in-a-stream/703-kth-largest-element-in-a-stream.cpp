class KthLargest {
public:
    int k;
     priority_queue <int, vector<int>, greater<int>> minh;  
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i=0; i<nums.size();i++){
            minh.push(nums[i]);
            
            if(minh.size()>k){                                       
              minh.pop();                                          
          }        
        }
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>k){                                       
              minh.pop();                                          
          }     
        return minh.top();
    }
};