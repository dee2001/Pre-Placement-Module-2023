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
    bool sym(TreeNode* l, TreeNode* r){
        if(l==nullptr && r == nullptr){
            return true;
        }
        if(l==nullptr || r == nullptr){
            return false;
        }
        if(l->val != r->val){
            return false;
        }
        bool a = sym(l->left,r->right);
        bool b = sym(l->right,r->left);
        return a && b;
    }
    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
};
