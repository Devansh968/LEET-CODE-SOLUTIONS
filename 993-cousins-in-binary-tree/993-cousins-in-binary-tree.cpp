class Solution {
public:
    bool solve(TreeNode* root,int x,int y){
        if(root==NULL)return true;
        if(root->left!=NULL && root->right!=NULL){
            if(root->left->val==x && root->right->val==y){
                return false;
            }
           if(root->left->val==y && root->right->val==x){
                return false;
            }
        }
        
        bool q=solve(root->left,x,y);
        bool p=solve(root->right,x,y);
        return p&q;
    }
    int hsolve(TreeNode* root,int val){
        if(root==NULL)return -1;
        if(root->val==val){
            return 1;
        }
        int x=hsolve(root->left,val);
        int y=hsolve(root->right,val);
        if(x!=-1)return x+1;
        if(y!=-1)return y+1;
        return -1;
    }
    bool isCousins(TreeNode* root, int x, int y) {
         bool j=solve(root,x,y);
         if(j==false)return false;
        int h1=hsolve(root,x);
        int h2=hsolve(root,y);
        if(h1==-1)return false;
        if(h1==h2)return true;
        return false;
    }
};