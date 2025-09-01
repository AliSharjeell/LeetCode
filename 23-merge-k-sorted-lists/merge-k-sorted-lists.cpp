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
    struct compare{
        bool operator()(ListNode* a,ListNode* b){
            return a->val > b->val;
        }
    };  
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // ListNode dummy(0);
        // ListNode* dummyptr = &dummy;
        // while(true){
        //     int cnt=0;
        //     for(int i=0;i<lists.size();i++){
        //         if(!lists[i]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt==lists.size()){
        //         break;
        //     }
        //     int min=INT_MAX;
        //     int mini=-1;
        //     for(int i=0;i<lists.size();i++){
        //         if(lists[i]&&lists[i]->val<min){
        //             min=lists[i]->val;
        //             mini=i;
        //         }
        //     }
        //             cout<<min<<" ";
        //     dummyptr->next=lists[mini];
        //     dummyptr=dummyptr->next;
        //     lists[mini]=lists[mini]->next;
        // }
        // return dummy.next;

        ListNode dummy(0);
        ListNode* dummyptr = &dummy;
        priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;
        for(int i=0;i<lists.size();i++){
            if(lists[i])
            minHeap.push(lists[i]);
        }
        while(!minHeap.empty()){
            dummyptr->next=minHeap.top();
            dummyptr=dummyptr->next;
            ListNode* temp = minHeap.top();
            minHeap.pop();
            if(temp->next){
                temp=temp->next;
                minHeap.push(temp);
            }
        }
        return dummy.next;
    }
};