class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string answer = "";
    string str = strs[0];

    if (strs.size() == 0)
      return answer;

    for (int i = 0; i < str.size(); i++) {
      for (int j = 0; j < strs.size(); j++) {
        // cout << strs[j][i];
        if (strs[j][i] != str[i]) {
          return answer;
        }
      }
      answer.push_back(str[i]);
    }
    return answer;
  
    }
};