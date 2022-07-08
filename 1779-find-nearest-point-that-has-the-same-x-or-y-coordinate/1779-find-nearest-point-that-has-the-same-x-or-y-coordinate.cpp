class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
         int dis=INT_MAX,index=-1;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0] or y==points[i][1]){
                int temp=abs(x-points[i][0])+abs(y-points[i][1]);
                if(dis>temp){
                    dis=temp;
                    index=i;
                }
            }
        }
        return index;
    }
};