class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int i=0;i<stones.size();i++) maxHeap.push(stones[i]);
        
        while(maxHeap.size()>1) {
            int larger = maxHeap.top();
            maxHeap.pop();
            int smaller = maxHeap.top();
            maxHeap.pop();
            if(larger!=smaller) maxHeap.push(larger-smaller);
        }
        if(maxHeap.empty()) return 0;
        return maxHeap.top();
    }
};