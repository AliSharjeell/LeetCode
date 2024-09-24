class Solution {
public:
    string sortSentence(string s) {
        map<int,string> a;
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                cout<<s.substr(start,i-1-start)<<" "<<s[i-1]-'0'<<" ";
                a[s[i-1]-'0']=s.substr(start,i-1-start);
                start=i+1;
            }
        }
        int max = s[s.size()-1]-'0';
        cout<<s.substr(start,s.size()-1-start)<<" "<<s[s.size()-1]-'0';
        a[s[s.size()-1]-'0']=s.substr(start,s.size()-1-start);
        string ans="";
        for(auto i:a){
            ans+=i.second;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};