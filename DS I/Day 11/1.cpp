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
        vector<vector<int>> ans;
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int t = q.size();
            vector<int> a;
            while(t--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp!=nullptr){
                    a.push_back(temp->val);
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            ans.push_back(a);
        }
        ans.erase(ans.end()-1);
        return ans;
    }
};
