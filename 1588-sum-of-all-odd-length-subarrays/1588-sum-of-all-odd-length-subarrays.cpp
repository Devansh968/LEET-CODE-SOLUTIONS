class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int  sum , ts = 0,size=1;
        
        while(size<=arr.size())
        {
            sum =0;
            for(int i = 0;i<=arr.size()-size;i++)
            {
                for(int  j =i;j<i+size;j++){
                    sum +=arr[j];
                }
                
                
            }
                    ts += sum;
                    size +=2;
            
        }
        return ts;
    }
};