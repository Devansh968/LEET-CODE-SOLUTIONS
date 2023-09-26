//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
      //int ans  =0;
         if(N==1) return 0;
        long sum = 1;
        for(long i=2; i*i<=N; i++){
            if(N%i==0){
                sum += i;
                if(i!=N/i) sum += N/i;
            }
        }
        if(sum==N) return 1;
        else
        return 0;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends