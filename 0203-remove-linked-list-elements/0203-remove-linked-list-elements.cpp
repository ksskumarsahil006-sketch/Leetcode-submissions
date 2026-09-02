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
    ListNode* removeElements(ListNode* head, int value) {
        if(head==NULL)return head;
        ListNode* ans =NULL;
        ListNode* ret =ans;
        while(head!=NULL){
            if(head->val==value){
                head=head->next;
                continue;
            }
            if(ans==NULL){
                ans=head;
                head=head->next;
                ret=ans;
                continue;
            }
            ans->next=head;
            ans=ans->next;
            head=head->next;
        }
        if(ans==NULL)return ans;
        ans->next=NULL;
        return ret;
    }
};