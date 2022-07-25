class Solution {
public:
    vector<string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        string code;
        unordered_set<string> codeSet;
        for(int i = 0; i < words.size(); i++) {
            code = "";
            for(int j = 0; j < words[i].size(); j++) code += morse[words[i][j] - 'a'];
            codeSet.insert(code);
        }
        return codeSet.size();
    }
};