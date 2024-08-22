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
    bool checktree(TreeNode* p, TreeNode* q, vector<int>& result, int& i) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Check the left subtree
        if (!checktree(p->left, q->left, result, i)) {
            return false;
        }

        // Compare current nodes
        result.push_back(p->val);
        result.push_back(q->val);
        if (result[i] != result[i + 1]) {
            return false;
        }
        i += 2;

        // Check the right subtree
        return checktree(p->right, q->right, result, i);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> abc;
        int i = 0;
        return checktree(p, q, abc, i);
    }
};
