class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int map_arr[2002] = {0};
        int uniq_arr[2002] = {0};
        
        for(int i=0; i<arr.size(); i++) {
            map_arr[arr[i]+1001] += 1;
        }
        
        
        for(int i=0; i<2002; i++) {
            if (map_arr[i] > 0) {
                uniq_arr[map_arr[i]] += 1;
                if (uniq_arr[map_arr[i]] > 1) {
                    return false;
                }
            }
        }
        return true;
    }
};