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
    int sum;
    void solve(TreeNode* node){
        if (node==nullptr){
            return;
        }
        solve(node->right);
        sum+= node->val;
        node->val = sum;
        solve(node->left);
        return;
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        sum=0;
        solve(root);
        return root;
    }
};