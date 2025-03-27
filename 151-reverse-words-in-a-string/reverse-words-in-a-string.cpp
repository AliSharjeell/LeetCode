class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ' && (s[i+1]!=' ' || s[i+1]!=NULL)){
                word+=s[i];
            }
            else if(word==""){

            }
            else{
                words.push_back(word);
                word="";
            }
        }
        if(word!="")
        {words.push_back(word);}
        string ans;
        reverse(words.begin(),words.end());
        for(string i: words){
            ans += i + " ";
        }
        ans.pop_back();
        return ans;
    }
};