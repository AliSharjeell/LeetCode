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
    bool solve(TreeNode* root){
        if(root->val==0){
            return false;
        }
        else if(root->val==1){
            return true;
        }
        else if(root->val==2){
            return (solve(root->right)||solve(root->left));
        }
        else if(root->val==3){
            return (solve(root->right)&&solve(root->left));
        }
        return false;
    }
public:
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};