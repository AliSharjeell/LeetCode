class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ind;
        int cnt=0;
        if(ruleKey == "type"){
            ind=0;
        }
        else if(ruleKey == "color"){
            ind=1;
        }
        else if(ruleKey == "name"){
            ind=2;
        }
        for(int i=0;i<items.size();i++){
            if(items[i][ind]==ruleValue){
                cnt++;
            }
        }
        return cnt;
    }
};