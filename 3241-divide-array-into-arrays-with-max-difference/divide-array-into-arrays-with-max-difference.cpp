class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> numbers;
        vector<vector<int>> answer;
        int first = -1;
        int second = -1;
        for(int i=0;i<nums.size();i++){
            numbers.push_back(nums[i]);
            if(first==-1){
                first=nums[i];
            }
            if((i+1)%2==0){
                second=nums[i];
                if((second-first)>k)
                    return {};
            }
            if((i+1)%3==0){
                // cout<<nums[i]<<" "<<second<<" "<<first<<"  ";
                if((nums[i]-second)>k||(nums[i]-first)>k)
                    return {};
                answer.push_back(numbers);
                numbers.clear();
                first = -1;
                second = -1;
            }
        }
        // if((answer[answer.size()-1][2]-answer[answer.size()-1][0])<=k)
        return answer;
        // return{};
    }
};