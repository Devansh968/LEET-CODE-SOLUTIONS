// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long int  l =1;
       long int r = n;
       long int mid;
       long  int result  = n;
        while(l<=r){

             mid  = (l+r)/2;
            if(isBadVersion(mid)){
            result = mid;
             
            r  = mid-1;
        }
            else{
              l = mid+1;
            }
        }
        
        return result;
    }
};