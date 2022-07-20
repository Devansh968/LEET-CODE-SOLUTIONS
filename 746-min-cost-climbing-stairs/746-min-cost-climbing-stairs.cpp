class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size()-1;
        for(int i=2;i<cost.size();i++){
            cost[i]=min(cost[i-1]+cost[i],cost[i-2]+cost[i]);
        }
        return min(cost[n],cost[n-1]);
    }
};