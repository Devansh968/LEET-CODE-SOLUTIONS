class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> s;
        unordered_map <int, int> m;
        
        for(int n : nums2){
            while(!s.empty() && n>s.top()){
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        
        vector <int> ans;
        for(int n : nums1)
            ans.push_back(m.find(n)!=m.end()? m[n]:-1);
        
        return ans;
        }
    
};