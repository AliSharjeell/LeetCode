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
    void dfs(TreeNode* root,int &maxi,int newmax){
        if(!root){
        newmax--;
        return;
        }
        newmax++;
        if(root->left)
        dfs(root->left,maxi,newmax);
        if(root->right)
        dfs(root->right,maxi,newmax);
        maxi=max(maxi,newmax);
    }
public:
    int maxDepth(TreeNode* root) {
        int maxi=0;
        dfs(root,maxi,0);
        return maxi;
    }
};