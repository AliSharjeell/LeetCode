class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxSub=0;
        unordered_set<char> set;
        while(j<s.length()){
            if(set.count(s[j])){
                while(s[i]!=s[j]){
                    set.erase(s[i]);
                    i++;
                }
                set.erase(s[i]);
                i++;
            }
            set.insert(s[j]);
            maxSub = max(maxSub,((j-i)+1));
            j++;
        }
        return maxSub;
    }
};