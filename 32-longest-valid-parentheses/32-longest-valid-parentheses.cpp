class Solution {
public:
    int longestValidParentheses(string s) {
         int n=s.length();

       stack<int>st;
       st.push(-1);
       int result=0;
       
       for(int i=0;i<n;i++)
       {
       
       if(s[i]=='(')
       {
           st.push(i);
       }
       else //(st[s]==')')
       {
           st.pop();
       
       if(!st.empty())
       {
           result=max(result,i-st.top());
       }
       
       else
       {
       st.push(i);    
       }
           
       }
       
   }
     return result;  
    }
};