class Solution {
public:
    string removeDuplicates(string s) {
    stack<char> st;
        int n = s.size();
        int i =0;
        string ans ="";
        
        while(i<n){
        if(st.empty() || st.top() != s[i]){
         st.push(s[i]);
                  }
          else
                  st.pop();
                  i++;
                  }
    
                  while(!st.empty()){
                      char ele = st.top();
                      st.pop();
                      ans += ele;
                  }
                  reverse(ans.begin(),ans.end());
                    return ans;
    
    }
};