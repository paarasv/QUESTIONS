class Solution {
public:
    int height(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        int l = height(root->left);
        int r = height(root->right);
        int maxii = 1 + max(l, r);
        return maxii;
    }

    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        int left = height(root->left);
        int right = height(root->right);
        int diff = abs(left - right);
        bool ans = diff <= 1;

        // Recursion to calculate left and right
        bool leftans = isBalanced(root->left);
        bool rightans = isBalanced(root->right);

        if (ans && leftans && rightans) {
            return true;
        } else {
            return false;
        }
    }
};
