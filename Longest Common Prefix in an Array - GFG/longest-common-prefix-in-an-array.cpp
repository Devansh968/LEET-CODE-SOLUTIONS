//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        sort(arr,arr+N);
        
        string s1 = arr[0];
        string s2 = arr[N-1];
        
        int  n1 = s1.size();
        int  n2 = s2.size();
        int  i =0;
        int  j =0;
        string ans;
        while(i<n1 && j<n2){
            if(s1[i] == s2[j])   ans.push_back(s1[i]);
            
            else{
                break;
            }
            
            i++;
            j++;
        }
        
        if(ans.size()==0) return "-1";
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends