class Solution { 
public:
    string removeStars(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                stk.pop();
            }else{
                stk.push(s[i]);
            }
        }
        string answer = "";
        while(!stk.empty()){
            answer+=stk.top();
            stk.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};