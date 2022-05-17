class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
     int i,sum=0;
      int n= arr.size();
    for(int r:arr)
        sum = sum+r;
        
        if(sum%3!=0)
            return false;
        int x = sum/3;
        
        int cursum=0, count=0;
        for(i=0;i<n;i++)
        {
          cursum = cursum + arr[i];
            if(cursum==x){
            count++;
            cursum=0;
            }
            
        }
        if(count>=3){
            return true;
        }

            return false;
    }
};
