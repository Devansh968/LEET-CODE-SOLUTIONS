class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       
        int sum=0, n = mat.size();
        
        for(int i =0;i<n;i++)   sum += mat[i][i];  //primary diagonal
        
       int  i =0,j =n-1;
        
        while(i<n)
        {
            sum += mat[i][j];   // secondry diagonal
            
            i++,j--;
            
            
        }
        
    if(n&1)  sum  -= mat[n/2][n/2];
        
        return sum;
        
    }
};