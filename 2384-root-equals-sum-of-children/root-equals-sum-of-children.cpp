/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool checkTree(TreeNode* root) {
        // cojndition 1
        if (root == nullptr || root->left ==nullptr && root->right == nullptr) {
            return 1;
        }
        int leftsum = 0, rightsum = 0;
        if (root->left != nullptr) {
             leftsum = root->left->val;
        }
        if (root->right != nullptr) {
            rightsum = root->right->val;
        }
        if (root->val == leftsum + rightsum && checkTree(root->left) &&
            checkTree(root->right)) {
            return 1;
        } else {
            return 0;
        }
    }
};