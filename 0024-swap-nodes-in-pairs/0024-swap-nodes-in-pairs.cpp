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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
          if(!head || head->next == NULL){
            return head;
        }
        ListNode*  cur  =  head->next->next;
        ListNode* prev  =head;
        head = head->next;
        head->next = prev;
        
        while(cur != NULL && cur->next !=NULL){
            prev->next = cur->next;
            prev  = cur;
            ListNode* temp  =  cur->next->next;
            cur->next->next = cur;
            cur = temp ;
        }
        prev->next  = cur;
        return head;
    }
};