class Solution {
public:
    bool isPalindrome(string s) {
        for(char &i:s){
            i=tolower(i);
        }
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<j&&!(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')){
                i++;
            }
             while(i<j&&!(s[j]>='a'&&s[j]<='z'||s[j]>='0'&&s[j]<='9')){
                j--;
            }
            if(s[i]!=s[j]){
                return false;
            }
            i++,j--;
        }
            return true;
        // string ans="";
        // for(char &i:s){
        //     i=tolower(i);
        // }
        // for(int i=0;i<s.length();i++){
        //     if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
        //         ans+=s[i];
        //     }
        // }
        // cout<<ans;
        // return ans == string(ans.rbegin(),ans.rend());
    }
};