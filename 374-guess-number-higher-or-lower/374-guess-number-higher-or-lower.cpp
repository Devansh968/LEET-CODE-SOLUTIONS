class Solution {
public:
    int guessNumber(int n) {
        int start=0,end=n,ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(guess(mid)==0){
                ans=mid;
                break;
            }
            else if(guess(mid)==-1)
                end=mid-1;
            else
                start=mid+1;
        }
        return ans;
    }
};
