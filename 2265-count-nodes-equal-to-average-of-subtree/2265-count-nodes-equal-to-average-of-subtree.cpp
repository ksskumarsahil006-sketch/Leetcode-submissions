/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Helper function just to compute sum and count of subtree rooted at 'curr'
    void getSubtreeStats(TreeNode* curr, int& sum, int& count) {
        if (curr == nullptr) return;
        
        sum += curr->val;
        count++;
        
        getSubtreeStats(curr->left, sum, count);
        getSubtreeStats(curr->right, sum, count);
    }

    void square(TreeNode* root, int& answer) {
        if (root == nullptr) return;

        int sum = 0;
        int count = 0;
        
        // Compute sum and count for the subtree rooted at 'root'
        getSubtreeStats(root, sum, count);

        // Correct check: Is root's value equal to subtree's average?
        if (count > 0 && root->val == (sum / count)) {
            answer++;
        }

        // Move to left and right nodes to check their subtrees
        square(root->left, answer);
        square(root->right, answer);
    }

    int averageOfSubtree(TreeNode* root) {
        int answer = 0;
        square(root, answer);
        return answer;
    }
};