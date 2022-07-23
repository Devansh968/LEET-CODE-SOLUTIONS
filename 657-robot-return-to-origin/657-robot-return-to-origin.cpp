class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0;
        int horizontal = 0;
        
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'U'){
                vertical++;
            }else if(moves[i] == 'D'){
                vertical--;
            }else if(moves[i] == 'R'){
                horizontal++;
            }else{
                horizontal--;
            }
        }
        
        return (vertical == 0 && horizontal == 0);
    }
};