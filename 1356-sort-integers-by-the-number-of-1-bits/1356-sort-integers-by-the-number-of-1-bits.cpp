class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int> > m;
        
        for(auto i : arr)
        {
            int  b = __builtin_popcount(i);
            m[b].push_back(i);
        }
        vector<int> ans  ; 
        for(auto i : m)
        {
            vector<int> ok  = i.second;
            
            sort(ok.begin(),ok.end());
            
            for( auto j : ok)  ans.push_back(j);
            
        }
        return ans;
    }
};