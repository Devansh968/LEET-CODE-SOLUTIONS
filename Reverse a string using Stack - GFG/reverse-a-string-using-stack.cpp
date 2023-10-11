//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    
    //string s1 = "";
    
    for(int i =0;i<len;i++){
        
        st.push(S[i]);
    }
    char * ans  =  new char[len];
    int i =0;
    while(!st.empty()){
        ans[i]  = st.top();
        i++;
        st.pop();
        
    }
    return ans;
}