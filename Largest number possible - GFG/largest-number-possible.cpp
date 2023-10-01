//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int sum){
        // code here
        string ans = "";
        if(sum ==0 && n>1) return "-1";
       
        
        for(int i =0;i<n;i++){
            
            if(sum>9)
            {
                ans  += '9';
                sum -= 9;
                
            }
            else{
                ans += to_string(sum);
                sum -= sum;
            }
        }
        
        if(sum !=0) { return "-1";}
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends