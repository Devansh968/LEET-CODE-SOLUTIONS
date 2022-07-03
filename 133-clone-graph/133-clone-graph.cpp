/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    void dfs (vector<Node*> &vis,Node* copy,Node* node)
    {
    vis[copy->val] = copy;    
        for(auto x: node->neighbors){
            if(vis[x->val]==NULL){
                Node* newnode = new Node(x->val);
                (copy->neighbors).push_back(newnode);
                dfs(vis,newnode,x);
            }
            else {
                (copy->neighbors).push_back(vis[x->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        vector<Node*> vis(1000,NULL);
        Node* copy = new Node(node->val);
        dfs(vis,copy,node);
        return copy;
    }
};