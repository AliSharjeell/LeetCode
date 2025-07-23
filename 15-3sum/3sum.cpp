class Solution {
    
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    answer.push_back({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                    while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return answer;




        // sort(nums.begin(),nums.end());
        // set<vector<int>> answer;
        // for(int i=0;i<nums.size();i++){
        //     unordered_set<int> set;
        //     for(int j=i+1;j<nums.size();j++){
        //         // if(nums[j]!=nums[j-1]&&j>1){
        //             int numberNeeded = -nums[i]-nums[j];
        //             if(set.count(numberNeeded)){
        //                 answer.insert({nums[i],nums[j],numberNeeded});
        //             }
        //             set.insert(nums[j]);
        //         // }
        //     }
        // }
        // vector<vector<int>> final;
        // for(auto i:answer){
        //     final.push_back(i);
        // }
        // return final;
    }
};