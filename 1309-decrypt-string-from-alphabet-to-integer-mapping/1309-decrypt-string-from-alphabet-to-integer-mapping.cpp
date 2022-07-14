class Solution {
public:
    string freqAlphabets(string s) {
         string ans;
        int i = s.size()-1;
        int n;
        while(i>=0){
            if(s[i] == '#'){
                string a = s.substr(i-2,2);
                i -= 3;
                n = stoi(a)-1;
            }
            else{
                string a = s.substr(i,1);
                n = stoi(a)-1;
                i--;
            }
            ans += ('a' + n); 
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};