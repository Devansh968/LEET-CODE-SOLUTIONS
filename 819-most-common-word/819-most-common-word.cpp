class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        /*
            "Bob hit a ball, the hit BALL flew far after it was hit."
            banned = ["hit"]
            most frequent word which is not banned
        */
        // 1) Transform full string to lowercase first
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        
        // 2) Create a set to access banned elements in O(1)
        unordered_set<string> bannedSet;
        for (auto& ban : banned) {
            bannedSet.insert(move(ban));
        }
        
        // 3) Now we want to iterate over paragraph for only lowercase chars
        // and add them to our map with their count
        // Note: Here I donot push an element if it is banned
        int start = 0;
        unordered_map<string, int> paragraphMap;
        while(start < paragraph.size()) {
            string temp = "";
            // 4) Get a word containing only a-z chars
            while(start < paragraph.size() and (paragraph[start] >= 'a' and paragraph[start] <= 'z')) {
                temp += paragraph[start];
                start++;
            }
            // 5) If current word is not banned then update count
            if (bannedSet.find(temp) == bannedSet.end()) {
                paragraphMap[temp]++;
            }
            
            // 6) After getting a-z word we need to skip all non char's i.e. "!?',;."
            // and spaces
            while(start < paragraph.size() and !(paragraph[start] >= 'a' and paragraph[start] <= 'z')) {
                start++;
            }
        }
        
        // 7) We simply want to get the word which came the maximum times
        int max = 0;
        string word = "";
        for (auto& para : paragraphMap) {
            if (para.second > max) {
                max = para.second;
                word = para.first;
            }
        }
        return word;
    }
};