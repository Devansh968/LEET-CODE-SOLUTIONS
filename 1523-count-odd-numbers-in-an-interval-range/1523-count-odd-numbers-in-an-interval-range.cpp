class Solution {
public:
    int countOdds(int low, int high) {
    int count=0;
        if(low%2!=0)
            low-=1;
        if(high%2!=0)
            high+=1;
        return (high-low)/2;
    
    
    }
};