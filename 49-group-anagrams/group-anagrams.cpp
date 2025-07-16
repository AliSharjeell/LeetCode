class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<pair<unordered_map<char,int>,string>> storage(strs.size());
       for(int i=0;i<strs.size();i++){
            storage[i].second = strs[i];
            for(int j=0;j<strs[i].size();j++){
                storage[i].first[strs[i][j]]++;
            }
       }
       vector<vector<string>> answer;
        vector<bool> used(strs.size(),false);
        for(int i=0;i<strs.size();i++){
        vector<string> answergroup;
        if(used[i]==false){
         answergroup.push_back(storage[i].second);
        }
            for(int j=0;j<strs.size();j++){
                if(storage[i].first==storage[j].first&&i!=j && used[j]==false){
                    answergroup.push_back(storage[j].second);
                    used[j]=true;
                }
            }
            if(!answergroup.empty())
            {
                answer.push_back(answergroup);
            }
            used[i]=true;
        }
        return answer;
    }
};