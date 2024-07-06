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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr){
            return nullptr;
        }
        
        stack<int> s;
        ListNode* temp = head;

        while(temp!=nullptr){
            s.push(temp->val);
            temp = temp->next;
        }

        ListNode* newHead  = new ListNode(s.top());
        s.pop();
        ListNode* curr = newHead;

        while(!s.empty()){
            curr->next = new ListNode(s.top());
            s.pop();
            curr=curr->next;
        }

        return newHead;
    }
};