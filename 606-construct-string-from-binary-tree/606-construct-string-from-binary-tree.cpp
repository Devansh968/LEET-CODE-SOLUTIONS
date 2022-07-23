class Solution {
    public: string tree2str(TreeNode* root) {
        if(!root)
            return "";
        
        if(root->left == nullptr && root->right ==  nullptr)
            return to_string(root->val); // leaf
        
        if(root->right == nullptr)
            return to_string(root->val) + "(" + tree2str(root->left) + ")"; // edge-case without first right child
        
		// general recursion (explicit pre-order)
        return to_string(root->val) + "(" + tree2str(root->left) + ")(" + tree2str(root->right) + ")";
        
    }
};