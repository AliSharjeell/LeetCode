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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode ans;
        ListNode* anscurr = &ans;

        while(curr1!=nullptr&&curr2!=nullptr){
            if(curr1->val<curr2->val){
                anscurr->next = curr1;
                anscurr = anscurr->next;
                curr1=curr1->next;
            }
            else{
                anscurr->next =curr2;
                anscurr = anscurr->next;
                curr2=curr2->next;
            }
        }

        if (curr1 != nullptr) {
            anscurr->next = curr1;
        } else {
            anscurr->next = curr2;
        }
        
        return ans.next;
    }
};