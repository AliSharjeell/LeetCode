class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int num1 = pq.top();
            pq.pop();
            int num2 = pq.top();
            pq.pop();
            cout<<num1<<" "<<num2<<"  ";
            if(num1!=num2){
                pq.push(num1-num2);
            }
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};