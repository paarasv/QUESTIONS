class Solution {  
public:  
    void inorder(TreeNode* root, vector<int>& result) {  
        if (root == nullptr) return;  // Base case: if the node is null, return  
        inorder(root->left, result);   // Traverse the left subtree  
        result.push_back(root->val);    // Visit the root  
        inorder(root->right, result);  // Traverse the right subtree  
    }  

    vector<int> inorderTraversal(TreeNode* root) {  
        vector<int> abc;  
        inorder(root, abc);  
        return abc;  
    }  
};