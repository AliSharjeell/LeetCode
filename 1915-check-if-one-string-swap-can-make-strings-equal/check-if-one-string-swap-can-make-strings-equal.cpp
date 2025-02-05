class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        if(s1.length()!=s2.length()) return false;
        int cnt=0;
        string st1 ="",st2="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i])cnt++;
            st1+=s1[i];st2+=s2[i];
        }
        sort(st1.begin(),st1.end());sort(st2.begin(),st2.end());
        if(cnt==s1.length()-2 && st1==st2) return true;
        return false;
    }
};