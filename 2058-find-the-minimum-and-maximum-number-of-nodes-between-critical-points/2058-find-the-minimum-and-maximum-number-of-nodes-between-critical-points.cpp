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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>temp;
        ListNode*t = head;
        while(t!=NULL){
            temp.push_back(t->val);
            t=t->next;
        }
        if(temp.size()<=2){
            return {-1,-1};
        }
       if (temp.size() <= 2) return {-1, -1};

        vector<int> local;
        for (int i = 1; i < temp.size() - 1; i++) {
            if ((temp[i] > temp[i+1] && temp[i] > temp[i-1]) ||
                (temp[i] < temp[i+1] && temp[i] < temp[i-1])) {
                local.push_back(i);
            }
        }

        // Must have at least 2 critical points to find distances
        if (local.size() < 2) return {-1, -1};
        int max_dist = local.back() - local.front();
        int min_dist = INT_MAX;

        for (int i = 1; i < local.size(); i++) {
            min_dist = min(min_dist, local[i] - local[i-1]);
        }

        return {min_dist, max_dist};
    }
};