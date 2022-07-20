class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
  
        
          for(auto it:ops){
            m = min(m,it[0]);
            n = min(n,it[1]);
        }
        return m*n;
    }
};