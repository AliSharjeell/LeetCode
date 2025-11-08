class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        while(k>0){
            k--;
            int num = pq.top();
            pq.pop();
            if(k==0)
                return num;
        }
        return 0;
    }
};