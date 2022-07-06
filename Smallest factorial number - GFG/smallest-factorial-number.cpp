// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
      int num=1,maxi=5*n,mid=0;
       while(num<maxi){
           mid = (num+maxi)/2;
           int count = 0;
           for(int i=5;i<=mid;i*=5){
               count+=(mid/i);
               }
           if(count<n){
              num =mid+1;
           }
           else{
               maxi = mid;
           }
       }
       return num;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends