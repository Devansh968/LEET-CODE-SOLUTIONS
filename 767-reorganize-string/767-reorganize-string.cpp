class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        string ans = "";
        
        
        for(auto ch: s){
            mp[ch]++;
            ans += '$';
        }
        
        priority_queue<pair<int, char> > pq;
        
      
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        
        int i=0;
        
        while(!pq.empty()){
            int len =  pq.top().first;
            char c = pq.top().second; 
            pq.pop();
            
            while(len--){
               
                if(ans[1] == '$'){
                    if(n%2==0){
                        if(i==n){
                            i=1;
                        }
                    }
                    else{
                        if(i==n+1){
                            i=1;
                        }
                    }
                }
                
                
                if(i>=n) return "";
                
                ans[i] = c;
                
                if(i!=0 && ans[i-1] == ans[i]) return "";
                
                i+=2;
            }
        }
        return ans;
    }
};