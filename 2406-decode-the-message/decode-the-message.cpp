class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> a;
        char cnt = 'a';
        for(int i=0;i<key.length();i++){
            if(key[i]!=' '&& a.find(key[i])==a.end()){
                a[key[i]]= cnt++;
            }
        }
        string ans = "";
        for(int i=0;i<message.length();i++){
            if(message[i]!=' '){
                ans+=a[message[i]];
            }
            else{
                ans+=" ";
            }
        }
        return ans;
    }
};