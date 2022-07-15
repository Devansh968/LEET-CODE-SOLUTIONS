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
    int i=0;
int func(ListNode* head)
    {
        if(!head)  return 0; 
    
       return func(head->next) + (pow(2,i++)*head->val);
    }
    
    
    int getDecimalValue(ListNode* head) {
        
        return func(head);
        
            
        }
    
};