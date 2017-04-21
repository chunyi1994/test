#ifndef 2_ADD_TWO_NUMBERS
#define 2_ADD_TWO_NUMBERS

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = nullptr;
        ListNode* p = nullptr;
        int flag = 0;
        int sum = 0;
        while (l1 || l2 || flag) {
            sum = 0;
            if (l1) {
                sum += l1->val;
                 l1=l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2=l2->next;
            }
            sum += flag;

            if (sum >= 10) {
                sum = sum % 10;
                flag = 1;
            } else {
                flag = 0;
            }
            ListNode *newNode = new ListNode(sum);
            if (!root) {
                root = newNode;
            } else {
                p->next = newNode;
            }
            p = newNode;

        }//while
        return root;
    }
};

#endif // 2_ADD_TWO_NUMBERS

