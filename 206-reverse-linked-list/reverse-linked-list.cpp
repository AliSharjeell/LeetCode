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
        if(head == nullptr || !head->next){
            return head; 
        }
        ListNode* t1 = head;
        ListNode* t2 = t1->next;
        ListNode* t3 = t2->next;
        t1->next=NULL;
        while(t3!=nullptr){
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        head=t2;
        return head;
    }
};