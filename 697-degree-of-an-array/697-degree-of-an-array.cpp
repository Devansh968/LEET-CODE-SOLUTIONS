class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> start, end, cnt;
        int degree = 0;
        
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            if(start.find(x) == start.end())
                start[x] = i;
            end[x] = i;
            if(cnt.find(x) == cnt.end())
                cnt[x] = 1;
            else
                cnt[x] = cnt[x] + 1;
        }
        int res = INT_MAX;
        for(auto it: cnt){
            degree = max(degree, it.second);
        }
        for(auto it:cnt){
            if(degree == it.second){
                res = min(res, (end[it.first]-start[it.first]+1));
            }
        }
        return res;
    }
};