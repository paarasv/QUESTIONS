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
    int balncedornot(TreeNode* root , bool & balanced){
        //balanced = true;
        if(root==nullptr){
            return 0;
        }

        int lh = balncedornot(root->left , balanced);
        int rh = balncedornot(root->right , balanced);
        if(abs(lh-rh)>1){
            balanced = false;
        }

        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool balanced = true;
        balncedornot(root, balanced);
        return balanced;
    }
};