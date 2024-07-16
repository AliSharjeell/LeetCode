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
    void find(TreeNode* root, int &sum, int low, int high) {
        if (root == nullptr) {
            return;
        }
        // Check the current node value
        if (root->val >= low && root->val <= high) {
            sum += root->val;
            cout << root->val << " ";
        }
        // Traverse the left subtree if the current node value is greater than low
        if (root->val > low) {
            find(root->left, sum, low, high);
        }
        // Traverse the right subtree if the current node value is less than high
        if (root->val < high) {
            find(root->right, sum, low, high);
        }
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        find(root, sum, low, high);
        return sum;
    }
};