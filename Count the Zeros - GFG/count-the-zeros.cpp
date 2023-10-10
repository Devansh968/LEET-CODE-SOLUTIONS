//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int  l =0,h = n-1;
        int ans;
        while(l<=h){
            int mid  = (l+h)/2;
            
            if(arr[mid]  == 0){
                ans  =  mid;
                h = mid-1;
            }
            else{
         l  =  mid +1;
        }
        }
        return n-ans;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends