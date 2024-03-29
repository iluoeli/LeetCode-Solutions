/*
 * 21. Merge Two Sorted Lists
 */


#include "common.h"


#if LEET_CODE == 21

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            }
            else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        tail->next = (l1 != NULL) ? l1 : l2;

        return head->next;
    }
};

int main()
{
    cout << "21. Merge Two Sorted Lists" << endl;

    return 0;
}


#endif
