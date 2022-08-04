class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        string sk;
        bool istrue;
        int count=0;
        for(int i=0;i<words.size();i++){
            sk=words[i];
            for(int j=0;j<sk.length();j++){
                if(sk[j]!=s[j]){
                    istrue=false; 
                    break;
                }
                else{
                     istrue=true;
                }
            }
            
            if(istrue==true){
                cout<<sk<<endl;
                count++;
            }
        }
        
        return count;
    }
};