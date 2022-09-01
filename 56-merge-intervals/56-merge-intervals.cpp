class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        int n  = intervals.size();
        
        for(int  i=0;i<n;i++){
            if(v.empty()){
                v.push_back(intervals[i]);
            }
            else  {
                
                vector<int>&ans = v.back();
                int  y  =  ans[1];
                
                if(intervals[i][0] <= y){
                    ans[1] = max(y,intervals[i][1]);
                }
                 else{
                     v.push_back(intervals[i]);
                 }           
            }
            
        }
        return v;
    }
};