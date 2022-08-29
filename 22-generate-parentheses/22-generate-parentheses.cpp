class Solution {
public:
    void helper(vector<string> &v,int n,int ob,int cb,string s){
        if(ob==n && cb == n)
        {
            v.push_back(s);
            return;
        }
        if(ob<n){
            helper(v,n,ob+1,cb,s+"(");
        }
        if(cb<ob){
            helper(v,n,ob,cb+1,s+")");
        }
            
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
    vector<string> v;
    int ob = 0;
    int cb = 0;
        helper(v,n,ob,cb,"");
      return v;  
    }
};