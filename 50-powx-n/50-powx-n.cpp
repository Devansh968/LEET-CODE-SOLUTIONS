class Solution {
public:
    double myPow(double x, int n) {
       
        long long p;
        double ans=1.0;
            if(n<0){
                p= ((long long )n)*-1;
                
            }
        else{
            p=(long long) n;
        }
        
        while(p){
            
            if(p%2 ){
                
                ans*=x;
                p=p-1;
            }
            else{
                x=x*x;
                p=p/2;
            }
        }
        if(n<0){
            ans=double(1.0)/(double)ans;
        }
        return ans;
    }
};