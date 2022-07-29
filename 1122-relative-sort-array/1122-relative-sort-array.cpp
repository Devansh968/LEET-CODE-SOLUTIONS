class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         map<int, int> mp;
        for(int i : arr1) mp[i]++;
        
        vector<int> ans;
        
        for(int i=0; i<arr2.size(); i++){
            
            while(mp[arr2[i]]--) ans.push_back(arr2[i]);
            
            mp.erase(arr2[i]);
            
        }
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            
            int x = it->first; int y = it->second;
            
            while(y--) ans.push_back(x);
        }
        
        return ans;
    }
};