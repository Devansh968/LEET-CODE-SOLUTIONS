class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n/2;i++)
        {
            swap(matrix[i],matrix[n-1-i]);
        }
        
        int i=0;
        while(i<n-1)
        {
            int r=i+1;
            while(r<n)
            {
                swap(matrix[i][r],matrix[r][i]);
                r++;
            }
            i++;
        }
    }
};