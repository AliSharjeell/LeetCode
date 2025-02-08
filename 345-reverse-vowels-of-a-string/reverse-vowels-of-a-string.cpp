class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        vector<int> pos;
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i = 0;i<s.length();i++){
            if(st.find(s[i])!=st.end()){
                vowels.push_back(s[i]);
                pos.push_back(i);
            }
        }
        for(int i=0;i<s.length();i++){
            if(!pos.empty()&&i==pos.front()){
                s[i]=vowels.back();
                pos.erase(pos.begin());
                vowels.pop_back();
            }
        }
        return s;
    }
};