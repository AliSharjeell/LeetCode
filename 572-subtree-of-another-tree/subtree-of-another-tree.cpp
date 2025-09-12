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
    bool dfsSubrootTrue(TreeNode* root, TreeNode* subRoot){
       if(!root&&!subRoot)
            return true;
        if(!root||!subRoot)
            return false;
        if(root->val != subRoot->val)
            return false;
        return dfsSubrootTrue(root->left, subRoot->left) && dfsSubrootTrue(root->right, subRoot->right);
    }

    void dfsToFindSameRootVal(TreeNode* root, TreeNode* subRoot, bool &isSub){
        if(!root)
            return;
        if(root->val==subRoot->val)
            if(dfsSubrootTrue(root,subRoot)){
                isSub=true;
                return;
            }
        if(root->left)
            dfsToFindSameRootVal(root->left, subRoot, isSub);
        if(root->right)
            dfsToFindSameRootVal(root->right, subRoot, isSub);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool isSub=false;
        dfsToFindSameRootVal(root,subRoot,isSub);
        return isSub;
    }
};