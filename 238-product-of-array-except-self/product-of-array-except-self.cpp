class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            ans[i]=nums[i-1]*ans[i-1];
        }
        int post = 1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=post;
            post*=nums[i];
        }
        return ans;



        // vector<int> pre(nums.size(),1);
        // for(int i=1;i<nums.size();i++){
        //     pre[i]=nums[i-1]*pre[i-1];
        // }
        // vector<int> post(nums.size(),1);
        // for(int i=nums.size()-2;i>=0;i--){
        //     post[i]=nums[i+1]*post[i+1];
        // }
        // vector<int> answer(nums.size());
        // for(int i=0;i<nums.size();i++){
        //     answer[i]=pre[i]*post[i];
        // }
        // return answer;
    }
};