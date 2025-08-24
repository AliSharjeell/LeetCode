class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length()){
            return "";
        }
        int i=0;int j=0;
         pair<int ,int> miniNew={INT_MAX,-1};
        unordered_map<char,int> tMap;
        int need=0;
        int have=0;
        for(auto k:t){
            tMap[k]++;
        }
        need=tMap.size();
        unordered_map<char,int> strMap;
        while(j<s.length()){
            strMap[s[j]]++;
            if(strMap[s[j]]==tMap[s[j]]){
                have++;
            }
            while(have==need){
                if((j-i+1)<miniNew.first){
                    miniNew = {(j-i+1),i};
                }
                strMap[s[i]]--;
                if(strMap[s[i]]<tMap[s[i]]){
                    have--;
                }
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