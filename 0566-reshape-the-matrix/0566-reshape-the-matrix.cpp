class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int  row  =  mat.size();
        int  col  =  mat[0].size();
        int cnt  =0;
        vector<vector<int>> newmatrix;
        if(row*col != r*c) return mat;
        for(int  i =0;i<r;i++){
            vector<int> v;
            for(int j =0;j<c;j++){
                v.push_back(mat[cnt/col][cnt%col]);
                cnt++;
            }
         newmatrix.push_back(v);
        }
        return newmatrix;;
    }
};