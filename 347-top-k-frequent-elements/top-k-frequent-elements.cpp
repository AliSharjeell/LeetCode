class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto i:nums){
            map[i]++;
        }
        vector<pair<int,int>> answer;
        for(auto i:map){
            answer.push_back({i.second,i.first});
        }
        sort(answer.begin(),answer.end());
        reverse(answer.begin(),answer.end());
        answer.erase(answer.begin()+k,answer.end());
        vector<int> final;
        for(int i=0;i<answer.size();i++){
            final.push_back(answer[i].second);
        }
        return final;
    }
};