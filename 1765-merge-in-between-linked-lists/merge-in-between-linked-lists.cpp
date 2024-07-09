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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* currend = list1;
        int cntend=0;
        ListNode* currstart = list1;
        int cntstart=0;
        while(cntend<b+1){
            currend=currend->next;
            cntend++;
        }
        while(cntstart<a-1){
            currstart=currstart->next;
            cntstart++;
        }
        currstart->next=list2;
        ListNode* currlist2 = list2;
        while(currlist2->next!=nullptr){
            currlist2=currlist2->next;
        }
        currlist2->next=currend;
        return list1;
    }
};