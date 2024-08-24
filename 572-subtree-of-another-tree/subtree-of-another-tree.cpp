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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        if (root == nullptr) {
            return false;
        }

        q.push(root);
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp->val == subRoot->val &&
                (temp->left == nullptr || subRoot->left == nullptr || temp->left->val == subRoot->left->val) &&
                (temp->right == nullptr || subRoot->right == nullptr || temp->right->val == subRoot->right->val)) {
                if (isSameTree(temp, subRoot)) {
                    return true;
                }
            }
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        return false;
    }

private:
    bool isSameTree(TreeNode* s, TreeNode* t) {
        if (!s && !t) return true;
        if (!s || !t) return false;
        return (s->val == t->val) &&
               isSameTree(s->left, t->left) &&
               isSameTree(s->right, t->right);
    }
};
