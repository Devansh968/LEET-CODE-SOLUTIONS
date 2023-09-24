//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
            
        }
        int  f1 = 1;
        int s1 =1;
        const int  mod  = 1e9 +7;
        
        for(int i =3;i<=n;++i){
            int  temp  = f1+s1;
            f1= s1;
            s1=temp%mod;
        }
        return s1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends