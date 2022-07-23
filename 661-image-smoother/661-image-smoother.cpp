class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        vector<int> xD = {-1, -1, 0, 1, 1, 1, 0, -1};
        vector<int> yD = { 0, 1, 1, 1, 0, -1, -1, -1};
        
        int m = img.size(), n = img[0].size();
        
        vector<vector<int>> res(m, vector<int>(n));
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                int sum = img[i][j], cnt = 1;
                
                for(int k=0; k<8; k++)
                {
                    int ii = i + xD[k], jj = j + yD[k];
                    
                    if (ii < 0 || ii >=m || jj < 0 || jj >= n)
                        continue;
                    
                    sum += img[ii][jj];
                    cnt++;
                }
                
                res[i][j] = sum/cnt;
            }
        
        return res;
    }
};