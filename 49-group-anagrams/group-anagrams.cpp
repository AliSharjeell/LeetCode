class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> prevans;
        for(int i=0;i<strs.size();i++){
            // map<char,int> storage;
            vector<int> storage(26,0);
            string uniquekey = "";
            for(int j=0;j<strs[i].size();j++){
                storage[strs[i][j]-'a']++;
            }
            for(int i=0;i<26;i++){
               uniquekey+=to_string(i+'a');
               uniquekey+=to_string(storage[i]);
            }
            prevans[uniquekey].push_back(strs[i]);
        }
        vector<vector<string>> answer;
        for(auto i:prevans){
            answer.push_back(i.second);
        }
        return answer;
        
        
        
        
        // unordered_map<int,vector<string>> prevans;
        // for(int i=0;i<strs.size();i++){
        //     int uniquekey=0;
        //     for(int j=0;j<strs[i].size();j++){
        //         uniquekey+= strs[i][j];
        //     }
        //     prevans[uniquekey].push_back(strs[i]);
        // }
        // vector<vector<string>> answer;
        // for(auto i:prevans){
        //     answer.push_back(i.second);
        // }
        // return answer;




        
    //    vector<pair<unordered_map<char,int>,string>> storage(strs.size());
    //    for(int i=0;i<strs.size();i++){
    //         storage[i].second = strs[i];
    //         for(int j=0;j<strs[i].size();j++){
    //             storage[i].first[strs[i][j]]++;
    //         }
    //    }
    //    unordered_map<unordered_map<char,int>,vector<string>> answerb4;
    //    for(int i=0;i<strs.size();i++){
    //         answerb4[storage[i].first].push_back(storage[i].second);
    //    }
    //    vector<vector<string>> answer;
    //    for(auto i:answerb4){
    //     answer.push_back(i.second);
    //    }
    //    return answer;









    //    vector<vector<string>> answer;
    //     vector<bool> used(strs.size(),false);
    //     for(int i=0;i<strs.size();i++){
    //     vector<string> answergroup;
    //     if(used[i]==false){
    //      answergroup.push_back(storage[i].second);
    //     }
    //         for(int j=0;j<strs.size();j++){
    //             if(storage[i].first==storage[j].first&&i!=j && used[j]==false){
    //                 answergroup.push_back(storage[j].second);
    //                 used[j]=true;
    //             }
    //         }
    //         if(!answergroup.empty())
    //         {
    //             answer.push_back(answergroup);
    //         }
    //         used[i]=true;
    //     }
    //     return answer;
    }
};