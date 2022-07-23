class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int i =0;
         int n = arr.size();
        vector<int> ans;
         while(i<n){
             int c_var = arr[i]-1;
             if(arr[i]!=arr[c_var]){
                swap(arr[i],arr[c_var]);
             }else{
                i++;
             }
          }
        for(int j=0;j<n;j++){
            if(j+1!=arr[j]){
                ans.push_back(arr[j]);
                ans.push_back(j+1);
            }
        }
        return ans;
    }
};