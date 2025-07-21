class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto i:nums){
            map[i]++;
        }
        vector<vector<int>> storage(nums.size());
        for(auto [i,j]:map){
            storage[j-1].push_back(i);
        }
        vector<int> answer;
        int cnt=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(!storage[i].empty()){
                for(auto j:storage[i]){
                    answer.push_back(j);
                    cnt++;
                    if(cnt>=k){
                        break;
                    }
                }
                if(cnt>=k){
                        break;
                    }
            }
            if(cnt>=k){
                        break;
                    }
        }
        return answer;

        // unordered_map<int,int> map;
        // for(auto i:nums){
        //     map[i]++;
        // }
        // priority_queue<pair<int,int>> pq;
        // for(auto i:map){
        //     pq.push({i.second,i.first});
        // }
        // vector<int> final;
        // for(int i=0;i<k;i++){
        //     final.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return final;




        // vector<pair<int,int>> answer;
        // for(auto i:map){
        //     answer.push_back({i.second,i.first});
        // }
        // sort(answer.begin(),answer.end());
        // reverse(answer.begin(),answer.end());
        // answer.erase(answer.begin()+k,answer.end());
        // vector<int> final;
        // for(int i=0;i<answer.size();i++){
        //     final.push_back(answer[i].second);
        // }
        // return final;
    }
};