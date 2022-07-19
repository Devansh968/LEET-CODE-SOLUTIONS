class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> arr;
        vector<int> temp;
        temp.push_back(1);
        arr.push_back(temp);
        temp.clear();
        
        temp.push_back(1);
        temp.push_back(1);
        arr.push_back(temp);
        
        vector<int> sum;
        sum = temp;
        temp.clear();
        for(int i=2;i<=rowIndex;i++) {
            temp.push_back(1);
            for(int j=0;j<sum.size()-1;j++) {
                int val = sum[j] + sum[j+1];
                temp.push_back(val);
            }
            
            temp.push_back(1);
            sum = temp;
            
            arr.push_back(temp);
            temp.clear();
        }
        
        return arr[rowIndex];
    }
};