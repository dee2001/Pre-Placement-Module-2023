/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* prev;
        TreeNode* p1=root;
        TreeNode* q1=root;
        while(p1 && p1==q1){
            prev = q1;
            if(p1->val>p->val){
                p1 = p1->left;
            }
            else if(p1->val<p->val){
                p1 = p1->right;
            }
            if(q1->val>q->val){
                q1 = q1->left;
            }
            else if(q1->val<q->val){
                q1 = q1->right;
            }
        }
        return prev;
    }
};
