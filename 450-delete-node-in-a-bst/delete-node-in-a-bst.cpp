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
    TreeNode* findmin(TreeNode* root){
        while(root!=NULL & root->left!=NULL){
            root = root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){
            return nullptr;
        }
        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }
        else{
            if(root->right==NULL&&root->left==NULL){
                delete root;
                return nullptr;
            }
            else if(root->right==NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else if(root->left==NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else{
                TreeNode* temp = findmin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right,temp->val);
            }
        }
        return root;
    }
};