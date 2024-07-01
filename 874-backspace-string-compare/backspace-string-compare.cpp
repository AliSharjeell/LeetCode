class Solution {
    string finalstr(string str){
        stack<char> s;
        for(int i=0;i<str.length();i++){
            s.push(str[i]);
            if(s.top()=='#'){
                if(!s.empty()){
                    s.pop();
                }
                if(!s.empty()){
                    s.pop();
                }
            }
        }
        stack<char> ns;
        while(!s.empty()){
            ns.push(s.top());
            s.pop();
        }
        string nstr ="";
        while(!ns.empty()){
            nstr+=ns.top();
            ns.pop();
        }
        return nstr;
    }
public:
    bool backspaceCompare(string s, string t) {
        return(finalstr(s)==finalstr(t));
    }
};