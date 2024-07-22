class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> kids;
        for(int i=0;i<heights.size();i++){
            kids.push_back({heights[i],names[i]});
        }
        sort(kids.begin(),kids.end());
        reverse(kids.begin(),kids.end());
        for(int i=0;i<names.size();i++){
            names[i]=kids[i].second;
        }
        return names;
    }
};