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
    bool find(TreeNode* root,TreeNode* same, int key){
        if(!root){
            return false;
        }
        while(root){
            if(root->val == key && root!=same){
                return true;
            }
            else if(root->val > key){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp){
                bool f = find(root,temp,k-(temp->val));
                if(f){
                    return true;
                }
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return false;
    }
};
