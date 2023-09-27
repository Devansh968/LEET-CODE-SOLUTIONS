//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
       vector<int> ans;
        int start=0,end=m-1;
        int min_difference=INT_MAX;
        while(start<n && end>=0)
        {
            int pair_sum=arr[start]+brr[end];
           
            if(abs(x-pair_sum)<min_difference)
            {   min_difference=abs(x-pair_sum);
                ans={arr[start],brr[end]};
            
            }
            if(pair_sum<=x)
                start++;
            else end--;
            
        }
        
        return ans;
     }
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends