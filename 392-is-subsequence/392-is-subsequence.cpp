class Solution {
public:
    bool isSubsequence(string s, string t) {
        
    int j = 0; // For index of str1 (or subsequence
 

    for (int i = 0; i < t.length() && j < s.length(); i++)
        if (s[j] == t[i])
            j++;
 
    // If all characters of str1 were found in str2
    return (j == s.length());
    }
};