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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v; 
    
         queue<TreeNode*> q;
          q.push(root);
        if(root == NULL) return v;
          while(1){
          int s  =  q.size();
          if(s==0)
             return v;
              vector<int> data;
        while(s>0){
            TreeNode* temp  =  q.front(); q.pop();
            data.push_back(temp->val);
            
            if(temp->left !=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                 q.push(temp->right);
              s--;
            }
              v.push_back(data);
        }
        return v;
        }
     };