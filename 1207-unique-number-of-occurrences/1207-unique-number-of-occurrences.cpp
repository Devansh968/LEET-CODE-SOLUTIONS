class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        unordered_map<int,int> m;
        vector<int> v;
        for(auto x:a)
            m[x]++;
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        
        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1; i++)
        { if(v[i]==v[i+1])
            return false;
         }
        return true;
    }
};