class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start > destination) return distanceBetweenBusStops(distance, destination, start);
        int ans = 0;
        int n = distance.size();
        for(int i=start;i<=destination;i++){
            if(i!=destination)
            ans+= distance[i];
        }
        int ans2 = 0;
        int i = destination;
        while(i!=start){
            ans2+= distance[i];
            i = (i+1)%n;
        }
        return min(ans, ans2);
    }
};