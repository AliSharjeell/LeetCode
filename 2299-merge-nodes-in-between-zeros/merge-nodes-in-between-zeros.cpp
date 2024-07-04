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
    ListNode* mergeNodes(ListNode* head) {
        vector<int> a;
        int cnt=-1;
        while(head!=nullptr){
            if(head->val==0){
                a.push_back(0);
                cnt++;
            }
                a[cnt]+=head->val;
                head=head->next;
        }
        ListNode* node = new ListNode(a[0]);
        ListNode* current = node;
        for(int i=1;i<a.size()-1;i++){
            current -> next = new ListNode(a[i]);
            current = current -> next;
        }
        return node;
    }
};