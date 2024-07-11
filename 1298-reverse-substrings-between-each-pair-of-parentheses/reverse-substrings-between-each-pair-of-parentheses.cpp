class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk;
        stack<char> stk2;
        stack<char> stk3;
        for(int i=0;i<s.length();i++){
            stk.push(s[i]);
            if(stk.top()==')'){
                while(stk.top()!='('){
                    if(stk.top()!='('&&stk.top()!=')'){
                        stk2.push(stk.top());
                    }
                    stk.pop();
                }
                stk.pop();
                while(!stk2.empty()){
                    stk3.push(stk2.top());
                    stk2.pop();
                }
                while(!stk3.empty()){
                    stk.push(stk3.top());
                    stk3.pop();
                }
            }
        }
        string news = "";
        while(!stk.empty()){
            news+=stk.top();
            stk.pop();
        }
        reverse(news.begin(),news.end());
        return news;
    }
};