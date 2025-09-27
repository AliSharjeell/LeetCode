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
    void reorderList(ListNode* head) {
        //half and half
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //cout<<slow->val;
        ListNode* head2=slow;
        //reverse 2nd half
        ListNode* curr = head2;
        ListNode* prev = nullptr;
        while(curr){
            ListNode* nextcurr = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextcurr;
        }
        head2 = prev;
        //cout<<head2->val;
        //merge
        ListNode ansList(0);
        ListNode* temp=&ansList;
        while(head&&head2){
            temp->next=head;
            head=head->next;
            temp=temp->next;
            temp->next=head2;
            head2=head2->next;
            temp=temp->next;
        }
        if(head){
            temp->next=head;
        }
        else{
            temp->next=head2;
        }
        temp->next=NULL;
        head=ansList.next;
    }
};