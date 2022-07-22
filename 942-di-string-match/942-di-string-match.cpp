class Solution {
public:
   vector<int> diStringMatch(string s) {
       int n=s.length();
       
       vector<int>v(n+1);
       
       int l=0, h=n;
       for(int i=0;i<n;i++)
       {
           if(s[i] == 'I')
           {
               v[i]=l;
               ++l;
           }
           else
           {
               v[i]=h;
               --h;
           }
       }
       v[n]=l;
       return v;
   }
};