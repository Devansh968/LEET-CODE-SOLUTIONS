//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
      long  long int fac=1;    
      if(N==1 || N==0){
          return 1;
      }  
      for(int  i =1;i<=N;i++){
          fac *=i;
      }
      return fac;
    }  
    };     
        
        
        
        
        
        
        
        
        
        
        
        
        
    //     //code herei
    //     if(N ==1  || N==0 ){
    //         return 1;
    //     }
        
    //     return N*factorial(N-1);
    // }

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends