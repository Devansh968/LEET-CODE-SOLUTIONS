//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum  =0;
        long maxsum  = 0;
        
        for(int  i =0;i<K;i++){
            sum += Arr[i];
            maxsum = sum;
        }
        int start =0;
        
        for(int i =K;i<N;i++){
            
            sum = (sum + Arr[i])-Arr[start];
            
            if(sum > maxsum)
            maxsum  = sum;
            start++;
        }
        
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends