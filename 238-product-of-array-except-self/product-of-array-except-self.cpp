class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            pre[i]=nums[i-1]*pre[i-1];
        }
        vector<int> post(nums.size(),1);
        for(int i=nums.size()-2;i>=0;i--){
            post[i]=nums[i+1]*post[i+1];
        }
        // for(auto i:)
        vector<int> answer(nums.size());
        for(int i=0;i<nums.size();i++){
            answer[i]=pre[i]*post[i];
        }
        return answer;
    }
};