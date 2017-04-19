#ifndef 206_REVERSE_LINKED_LIST
#define 206_REVERSE_LINKED_LIST
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
   ListNode* reverseList(ListNode* node) {
       if(!node){
           return NULL;
       }
       if(!node->next){
           return node;
       }
       ListNode* ret = reverseList(node->next);
       ListNode* temp = node->next;
       node->next = NULL;
       temp->next = node;
       return ret;

   }
};

#endif // 206_REVERSE_LINKED_LIST

