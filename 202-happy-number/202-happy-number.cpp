class Solution {
public:
    int square(int digit){
        int sq,sum=0;
        while(digit>0){
            sq=digit%10;
            sq*=sq;
            sum+=sq;
            digit/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int>map;
        while(map.find(n)==map.end()){
            map[n]=1;
            if(n==1)
                return true;
            n=square(n);
        }
        return false;
    }
        
        
    
};