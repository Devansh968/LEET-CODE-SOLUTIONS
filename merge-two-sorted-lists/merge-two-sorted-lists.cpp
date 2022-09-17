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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          if(list1 == NULL) //if  1st  in  null
          {
              return list2;
          }
        if(list2 == NULL)
        {
            return  list1;
        }
    
      if(list1->val <list2->val)
      {
          list1->next  =  mergeTwoLists(list1->next ,list2);  // call  recursion  from  next  of list1
          return list1;
      }
        else{
            list2->next  =   mergeTwoLists( list1 , list2->next); // call recursion  from d the next of   list 2;
            return list2;
        }
        
        }
};
        
        
//         ListNode* ft = nullptr;
//         ListNode* fh = NULL;
        
//         while(list1 !=NULL && list2 !=NULL)
//         {
//             if(ft== NULL && fh==NULL)
//             {
//             if(list1->val > list2->val)
//             {
//                ft = list2;
//                fh = list2;
//                list2  = list2->next;
//             }
//           else
//           {
//                ft  =  list1;
//                 fh =  list1;
//               list1  = list1->next;
//           }
            
//             }
//         if(list1->val > list2->val)
            
//         {
//             ft->next  =  list2;
//             ft  =  ft->next;
//             list2 =  list2->next;
//         }
//        else{
//            ft->next = list1;
//            ft =  ft->next;
//            list1 = list1->next;
//           }
//             }
//         if(list1 != NULL){
//             ft->next  =  list1;
//         }
//         if(list2 != NULL){
//             ft->next = list2;
//         }
              
//         return fh;
    