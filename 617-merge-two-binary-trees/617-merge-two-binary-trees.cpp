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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
         if(!root1 && !root2) return NULL;
        if(!root1) root1=new TreeNode(0);
        if(!root2) root2=new TreeNode(0);
        
        TreeNode * root = new TreeNode(root1->val + root2->val,mergeTrees(root1->left,root2->left),mergeTrees(root1->right,root2->right));
        return root;
    }
};