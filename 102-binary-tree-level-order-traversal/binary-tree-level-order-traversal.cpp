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
        if(!root)
            return {};
        queue<TreeNode*> que;
        vector<vector<int>> answer;
        que.push(root);
        while(!que.empty()){
            vector<int> ans;
            int len=que.size();
            for(int i=0;i<len;i++){
                if(que.front())
                {
                    TreeNode* temp = que.front();
                    ans.push_back(temp->val);
                    que.pop();
                    if(temp->left)
                        que.push(temp->left);
                    if(temp->right)
                        que.push(temp->right);
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};