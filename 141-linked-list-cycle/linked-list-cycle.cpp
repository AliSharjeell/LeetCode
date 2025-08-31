/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* t1=head;
        ListNode* t2=head;
        while(t1){
            if(t1->next){
                t1=t1->next;
            }
            else{
                return false;
            }
            if(t2->next && t2->next->next){
                t2=t2->next->next;
            }
            else{
                return false;
            }
            if(t1==t2){
                return true;
            }
        }
        return false;
    }
};