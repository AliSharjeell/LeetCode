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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode* dummyptr = &dummy;
        // vector<ListNode*> temp(lists.size());
        // for(int i=0;i<lists.size();i++){
        //     temp[i] = lists[i];
        // }
        while(true){
            int cnt=0;
            for(int i=0;i<lists.size();i++){
                if(!lists[i]){
                    cnt++;
                }
            }
            if(cnt==lists.size()){
                break;
            }
            int min=INT_MAX;
            int mini=-1;
            for(int i=0;i<lists.size();i++){
                if(lists[i]&&lists[i]->val<min){
                    min=lists[i]->val;
                    mini=i;
                }
            }
                    cout<<min<<" ";
            dummyptr->next=lists[mini];
            dummyptr=dummyptr->next;
            lists[mini]=lists[mini]->next;
        }
        return dummy.next;
    }
};