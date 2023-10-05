//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   long long int atmost(string s, int k) {
      if(k<0) return 0;
      long long int result = 0;
      int i=0,j=0,count=0;
      int arr[26] = {0};
     while(i<s.length()) {
          arr[s[i]-'a']++;
          if(arr[s[i]-'a']==1) count++;
          while(count>k) {
              arr[s[j]-'a']--;
              if(arr[s[j]-'a']==0) count--;
              j++;
          }
          result += (i-j+1);
          i++;
      }
      return result;
  }
    long long int substrCount (string s, int k) {
    	 return atmost(s,k) - atmost(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends