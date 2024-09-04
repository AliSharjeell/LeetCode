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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
            int divisor = gcd(temp->val,prev->val);
            ListNode* newnode = new ListNode(divisor);
            prev->next=newnode;
            newnode->next=temp;
        }
        return head;
    }
};