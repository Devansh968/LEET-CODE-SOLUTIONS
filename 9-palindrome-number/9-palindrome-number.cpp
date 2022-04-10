class Solution {
public:
    // 2147483647
    bool isPalindrome(int x) {
      
    long  int num = 0;
        int y = x;
        while(x > 0){
            num = num * 10;
            num = num + (x % 10);
            x = x / 10;
        }
        if(num == y)
            return true;
        else
            return false;
    }
};