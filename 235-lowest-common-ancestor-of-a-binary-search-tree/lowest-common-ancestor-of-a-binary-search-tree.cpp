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
    void dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode* &ans){
        if(p->val < root->val && q->val < root->val){
            dfs(root->left, p, q,ans);
        }
        else if(p->val > root->val && q->val > root->val){
            dfs(root->right, p, q,ans);
        }
        else{
            ans = root;
            return;
        }
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = nullptr;
        dfs(root, p, q, ans);
        return ans;
    }
};