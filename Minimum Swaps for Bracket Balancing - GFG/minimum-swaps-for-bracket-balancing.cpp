// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        int  n = S.size();
        int ans=0;
       int open=0,close=0;
        int fault=0;
for(int i=0;i<=n;i++){
    if(S[i]==']'){
        close ++;
        fault=close-open;;
}
   
    else{
   open ++;
   if(fault>0){
  ans+=fault;
 fault--;
}
}
}
return ans;
  
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends