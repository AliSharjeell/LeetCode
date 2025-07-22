class Solution {
public:
    bool isPalindrome(string s) {
        for(char &i:s){
            i=tolower(i);
        }
        for(int i=0;i<s.length();i++){
            if(!(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')){
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<s;
        string str = s;
        reverse(str.begin(), str.end());
        return s == str;
    }
};