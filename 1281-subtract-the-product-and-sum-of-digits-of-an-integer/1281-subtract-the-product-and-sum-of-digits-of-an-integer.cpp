class Solution {
public:
    int subtractProductAndSum(int n) {
        int m = 1;
        int  sum =0;
        
        while(n!=0)
        {
            
            int  r  = n%10;
            m *= r;
            sum += r;
            n  = n/10;
        }
        return m-sum;
    }
};