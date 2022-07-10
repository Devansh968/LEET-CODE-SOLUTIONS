class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     int x=(coordinates[1][0]-coordinates[0][0]);
        int y=(coordinates[1][1]-coordinates[0][1]);
        for(int i=2;i<coordinates.size();i++){
            if((coordinates[i][1]-coordinates[0][1])*x!=(coordinates[i][0]-coordinates[0][0])*y) return false;
        }
        return true;   
    }
};