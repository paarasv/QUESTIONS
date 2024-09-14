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
    int diameterOfBT(TreeNode* root , int&ans){
        if(root==nullptr){
            return 0;
        }
        int left = diameterOfBT(root->left , ans);
        int right = diameterOfBT(root->right , ans);
        ans = max(ans, left+right);
        return max(left, right)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans =0;
        diameterOfBT(root, ans);
        return ans ;
    }
};