/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class comp{
    public:
    bool operator()(ListNode* node1,ListNode* node2){
        return node1->val>=node2->val;
    }
};

class Solution {
public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head  = new ListNode(0);
        ListNode* temp   = head;
        priority_queue<ListNode*,vector<ListNode*>,comp> pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i] != NULL)
         pq.push(lists[i]);
            
        }
      while(!pq.empty()){
          auto least  =  pq.top();
          pq.pop();
         temp->next  = least;
          temp = temp->next;
          if(least->next)
          pq.push(least->next);
          }
          
      
      return head->next;
    }
};