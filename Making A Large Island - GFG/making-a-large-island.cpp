//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    /* Dynamic graph -> so DSU  */
    int Dparent[999999];
    int Dsize[999999];

    void DSU(int n){
        for(int i=0;i<=n;i+=1){
            Dparent[i]=i;
            Dsize[i]=1;
        }
    }

    int Dfind(int val){
        if(val == Dparent[val]){
            return val;
        }

        return Dparent[val]= Dfind(Dparent[val]);
    }

    void Dunion(int a,int b){
        int pa= Dfind(a), pb=Dfind(b);

        if(pa==pb){
            return;
        }

        if(Dsize[pb]>Dsize[pa]) swap(a,b);

        Dparent[pb]=pa;
        Dsize[pa]+= Dsize[pb];
    }

    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int ele= n*n;
        DSU(ele);

        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};

        set<pair<int,int>> st;
        int ans=0;
        // Initialisation 
        for(int i=0;i<n;i+=1){
            for(int j=0;j<n;j+=1){
                if(grid[i][j]==1){
                    int ele= i*n+j;
                    for(int k=0;k<4;k+=1){
                        int x= dx[k]+i;
                        int y= dy[k]+j;

                        if(x>=0 && y>=0 && x<n && y<n && grid[x][y]==1){
                            int newele= x*n+y;
                            Dunion(ele,newele);
                        }
                    }
                }
            }
        }

        for(int i=0;i<n*n;i+=1){
            ans=max(ans,Dsize[i]);
        }

 

        // Now we can change maximum one zero to one in order to get answer
        for(int i=0;i<n;i+=1){
            for(int j=0;j<n;j+=1){
                if(grid[i][j]==0){
                    set<int> par;
                    int ele= i*n+j;

                    for(int k=0;k<4;k+=1){
                        int x=dx[k]+i;
                        int y=dy[k]+j;

                        if(x>=0 && y>=0 && x<n && y<n && grid[x][y]==1){
                            par.insert(Dfind(x*n+y));
                        }
                    }

                    int an=1;
                    for(auto it:par){
                        an+= Dsize[it];
                    }
                    ans=max(ans,an);
                }
            }
        }

        return ans;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends