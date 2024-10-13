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
    ListNode* rotateRight(ListNode* head, int k) {
        int cnt=0;
        ListNode* templen = head;
        while(templen!=nullptr){
            templen=templen->next;
            cnt++;
        }
        if(cnt!=0)
        {
            k%=cnt;
        }
        for(int i=0;i<k;i++){
            ListNode* temp = head;
            if(!(temp==nullptr||temp->next==nullptr))
            {
                while(temp->next->next!=NULL){
                temp=temp->next;
                }
            ListNode* newnode = new ListNode(temp->next->val);
            newnode->next=head;
            head=newnode;
            ListNode* temp2 = temp->next;
            temp->next=nullptr;
            delete temp2->next;
            }
        }
        return head;
    }
};