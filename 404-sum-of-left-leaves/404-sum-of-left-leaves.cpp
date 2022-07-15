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
    int total =0;
    void dfs(TreeNode* root)
    {
        if(!root) return ;
        
        if(root->left !=NULL  && (root->left->left==NULL  && root->left->right==NULL))
            total += root->left->val;
        
           dfs(root->right);
           dfs(root->left);
        
    }
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return total;
    }
};