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
    void dfs(TreeNode* p, TreeNode* q,bool &same){
        if(!p&&!q){
            return;
        }
        if(!p||!q){
            same=false;
            return;
        }
        if(p->val!=q->val){
            same=false;
            return;
        }
        if(p->left&&q->left){
            dfs(p->left,q->left,same);
        }
        else if(p->left||q->left){
            same=false;
            return;
        }
        if(p->right&&q->right){
            dfs(p->right,q->right,same);
        }
        else if(p->right||q->right){
            same=false;
            return;
        }
        return;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool same = true;
        dfs(p,q,same);
        return same;
    }
};