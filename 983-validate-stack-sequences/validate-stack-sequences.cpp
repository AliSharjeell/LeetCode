class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            s.push(pushed[i]);
            while(popped[j]==s.top()){
                    s.pop();
                    j++;
                if(j==popped.size()){
                    break;
                }
                if(s.empty()){
                    break;
                }
            }
        }
        return(s.empty());
    }
};