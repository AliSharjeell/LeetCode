class Solution {
    bool isAvailibleInMainStr(unordered_map<char,int>& big, unordered_map<char,int>& small){
        for(auto i:small){
            char letter = i.first;
            int count = i.second;
            if(big.find(letter)==big.end()||big[letter]<count){
                return false;
            }
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length()){
            return "";
        }
        int i=0;int j=0;
        string str = "";
         pair<int ,int> miniNew={INT_MAX,-1};
        unordered_map<char,int> tMap;
        for(auto k:t){
            tMap[k]++;
        }
        unordered_map<char,int> strMap;
        while(j<s.length()){
            str+=s[j];
            strMap[s[j]]++;
            while(isAvailibleInMainStr(strMap,tMap)){
                if((j-i+1)<miniNew.first){
                    miniNew = {(j-i+1),i};
                }
                // cout<<str<<" ";
                strMap[s[i]]--;
                i++;
            }
            j++;
        }
        if(miniNew.second==-1){
            return "";
        }
        return s.substr(miniNew.second,miniNew.first);
    }
};