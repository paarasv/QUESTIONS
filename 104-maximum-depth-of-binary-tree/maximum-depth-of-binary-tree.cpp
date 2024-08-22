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
    int maxDepth(TreeNode* root) {
        // Base case: if the current node is null, the depth is 0
        if (root == nullptr) {
            return 0;
        }

        // Recursively calculate the depth of the left and right subtrees
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // The depth of the current node is the maximum of the left and right subtree depths, plus one
        return max(left, right) + 1;
    }
};
