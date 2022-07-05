// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
     if(M>N)
      return -1;
      int l=0,h=0,r;
      for(int i=0;i<N;i++)
      h+=A[i];
      while(l<=h)
      {
          int mid=l+(h-l)/2;
          int p=M,csum=0,i=0;
          while(i<N)
          {
              csum+=A[i];
              if(csum>mid)
              {
                  p--;
                  if(p==0)
                  break;
                  csum=0;
              }
              else
              i++;
          }
          if(p==0)
          l=mid+1;
          else
          {
              r=mid;
              h=mid-1;
          }
          
      }
      return r;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends