class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1,0);
        vector<int>outdegree(n+1,0);
        for(auto x:trust){
            indegree[x[1]]++;
            outdegree[x[0]]++;
            
        }
        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 and outdegree[i]==0)return i;
        }
        return -1;
    }
};

