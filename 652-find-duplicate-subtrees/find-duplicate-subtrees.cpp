class Solution {
public:
    string helper(TreeNode* root, unordered_map<string, int> &subtreeMap, vector<TreeNode*> &ans) {
        if (!root)
            return "#";  // Use a unique character to represent null nodes to avoid incorrect matches

        // Recursively get the string representation of the left and right subtrees
        string left = helper(root->left, subtreeMap, ans);
        string right = helper(root->right, subtreeMap, ans);

        // Create the current subtree signature, using "#" to distinguish null values
        string subtree = to_string(root->val) + "," + left + "," + right;

        // Increment the count of this subtree signature
        subtreeMap[subtree]++;

        // If this subtree appears exactly twice, it's a duplicate, so add it to the result
        if (subtreeMap[subtree] == 2) {
            ans.push_back(root);
        }

        return subtree;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string, int> subtreeMap;
        vector<TreeNode*> ans;
        helper(root, subtreeMap, ans);
        return ans;
    }
};