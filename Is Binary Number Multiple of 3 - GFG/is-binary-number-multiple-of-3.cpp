//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int x =1,sum  =0;
	    
	    for(int i  = s.length()-1;i>=0;i--){
	        if(s[i] - '0'  == 1){
	            sum  =  (sum+x) %3;
	        }
	        
	        x = (x*2)%3;
	    }
	    if(sum ==0) return 1;
	    else{
	        return  0;
	    }
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends