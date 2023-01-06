class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mn =  prices[0];
      int ans = 0;
        for(int i =0;i<prices.size();i++) {
         ans =  max(ans,(prices[i]-mn));
         mn  = min(mn,prices[i]);
        }
        return ans;
    }
};