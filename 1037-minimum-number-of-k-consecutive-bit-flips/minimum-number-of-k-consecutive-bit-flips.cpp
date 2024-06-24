class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int res = 0;
        int flip = 0; 
        queue<int> q;
        for (int i = 0; i < nums.size(); ++i) {
            while (q.size() && q.front() == i) {
                flip --;
                q.pop();
            }
            if ((nums[i] + flip) % 2 == 0) {
                if (i + k > nums.size()){
                    return -1;
                } 
                flip++;
                res++;
                q.push(i + k);
            }
        }
        return res;
    }
};