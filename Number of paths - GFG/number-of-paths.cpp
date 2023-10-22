//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
   public:
    const long long mod = 1e9+7;
    long long pp(long long a,long long b){
        long long ans = 1;
        while(b){
            if(b&1) (ans*=a)%=mod;
            b>>=1;
            (a*=a)%=mod;
        }
        return ans%mod;
    }
    long long  numberOfPaths(int M, int N)
    {
       long long val = 1;
       for(long long i=N;i<N+M-1;i++){
           (val*=i)%=mod;
       }
       long long val2 = 1;
     for(long long i=1;i<M;i++){
           (val2*=i)%=mod;
       }
       return ((val%mod) * ((pp(val2,mod-2))%mod))%mod;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends