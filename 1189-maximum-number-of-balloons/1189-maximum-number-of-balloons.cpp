class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0;
        int a=0;
        int l=0;
        int o=0;
        int n=0;
        for(auto i:text){
            if(i=='b'){
                b++;
            }
            else if(i=='a'){
                a++;
            }
            else if(i=='l'){
                l++;
            }
            else if(i=='o'){
                o++;
            }
            else if(i=='n'){
                n++;
            }
        }
        
        l=l/2;
        o=o/2;
        return min(b,min(a,min(l,min(o,n))));
    }
    
};