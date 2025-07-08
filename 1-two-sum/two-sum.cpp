class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j&&nums[i]+nums[j]==target)
        //         return {i,j};
        //     }
        // }
        // return {};
        vector<pair<int,int>> pairy;
        for(int i=0;i<nums.size();i++){
            pairy.push_back({nums[i],i});
        }
        sort(pairy.begin(),pairy.end());
        int i=0;
        int j=pairy.size()-1;
        while(i<j){
            if(pairy[i].first+pairy[j].first==target){
                return {pairy[i].second,pairy[j].second};
            }
            else if(pairy[i].first+pairy[j].first>target){
                j--;
            }
            else{
                i++;
            }
        }
        return{};
    }
};