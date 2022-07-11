class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        int bank  = accounts.size();
        int  cus = accounts[0].size();
        
        for(int  i =0;i<bank;i++)
        {
          int  wealth =0;
            
            for(int j =0;j<cus;j++){
             wealth  += accounts[i][j];
            }
              
    
        
        ans =  max(ans,wealth);
        }
        return ans;
    }
};