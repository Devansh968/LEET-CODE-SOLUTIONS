class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
         map<int, int> row;
        map<int, int> column;
        int count = 0;
        
        for (int i = 0; i < indices.size(); i++) {
            row[indices[i][0]]++;
            column[indices[i][1]]++;
        }
    
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++) {
               if ((row[i] + column[j]) % 2 == 1) {
                   count++;
               }
                   
            }
        }
        
        return count;
    }
};