/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        vector<int> a;
        while(curr!=nullptr){
            a.push_back(curr->val);
            curr=curr->next;
        }
        curr = head;
        int cnt=0;
        int num1 = a[k-1];
        int num2 = a[a.size()-k];
        while(curr!=nullptr){
            if(cnt==k-1)
            {
                curr->val=num2;
            }
            if(cnt==a.size()-k){
                curr->val=num1;
            }
            curr=curr->next;
            cnt++;
        }
        return head;
    }
};