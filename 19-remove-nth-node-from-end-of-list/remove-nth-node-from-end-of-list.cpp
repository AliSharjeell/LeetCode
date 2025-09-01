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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next and n==1){
            return nullptr;
        }
        int num=0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            num++;
        }
        int rem=(num-n)+1;
        temp=head;
        num = 0;
        if(rem==1){
            head=head->next;
        }
        else{
            while(temp){
                num++;
                if(num==rem-1){
                    break;
                }
                temp=temp->next;
            }
        }
        cout<<temp->val;
        temp->next=temp->next->next;
        return head;
    }
};