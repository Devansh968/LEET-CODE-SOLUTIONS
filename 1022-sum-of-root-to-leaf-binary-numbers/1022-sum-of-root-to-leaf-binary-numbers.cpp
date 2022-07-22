class Solution {
public:
    void searchNode(TreeNode* root, int preBin, int &sum)
    {
        int curBin; 
        
        curBin = (preBin << 1) + root->val;
        if (!root->left && !root->right)
            sum += curBin;
        if (root->left)
            searchNode(root->left, curBin, sum);
        if (root->right)
            searchNode(root->right, curBin, sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        int ret;
        ret = 0;
        searchNode(root, 0, ret);
        return (ret);
    }
};