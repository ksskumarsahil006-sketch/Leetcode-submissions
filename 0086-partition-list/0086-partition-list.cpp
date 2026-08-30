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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode result_head(0);
        ListNode* result = &result_head;
        ListNode greaterNode(0);
        ListNode* greater = &greaterNode;
        while (temp != NULL) {
            if (temp->val < x) {
                result->next = temp;
                result = result->next;
            } else {
                greater->next = temp;
                greater = greater->next;
            }
            temp = temp->next;
        }
        greater->next=NULL;
        result->next = greaterNode.next;

        return result_head.next;
    }
};