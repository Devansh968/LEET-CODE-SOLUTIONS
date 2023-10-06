//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    
    int i =0;
    int j  =0;
     int  maxi  =0;
     
     unordered_set<int> st;
     
     while(j<s.size()){
         
         if(st.count(s[j]) ==0){
             
             st.insert(s[j]);
             j++;
             maxi  =  max(maxi,j-i);
         }
         else{
              st.erase(s[i]);
              i++;
         }
     }
     return maxi;
     
}