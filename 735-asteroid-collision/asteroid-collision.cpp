class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for(int i=0;i<asteroids.size();i++){
            stk.push(asteroids[i]);
            while(!stk.empty() && stk.top()<0){
                int ast1 = stk.top();
                stk.pop();
                if(!stk.empty())
               { int ast2 = stk.top();
                stk.pop();
                if(ast1+ast2==0){
                    break;
                }else if(ast1<0&&ast2<0){
                    stk.push(ast2);
                    stk.push(ast1);
                    break;
                }
                else if(abs(ast1) > abs(ast2)){
                    stk.push(ast1);
                }
                else{
                    stk.push(ast2);
                }}else{
                    stk.push(ast1);
                    break;
                }
            }
        }
        stack<int> stk2;
        while(!stk.empty()){
            stk2.push(stk.top());
            stk.pop();
        }
        vector<int> answer;
        while(!stk2.empty()){
            answer.push_back(stk2.top());
            stk2.pop();
        }
        return answer;
    }
};