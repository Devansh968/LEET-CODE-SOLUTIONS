class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = arr1.size();
        for(int i: arr1){
            int start = 0, end = arr2.size()-1, mid;
            while(start <= end){
                mid = start + (end-start)/2;
                if(d >= abs(-i + arr2[mid])){
                    count--;
                    break;
                }
                else{
                    if(arr2[mid] > i)
                        end = mid - 1;
                    else
                        start = mid + 1;
                }
            }
        }
        return count;
    }
};