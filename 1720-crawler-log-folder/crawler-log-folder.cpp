class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> s;
        for(int i=0;i<logs.size();i++){
            if(logs[i]!="./"&&logs[i]!="../"){
                logs[i].pop_back();
                s.push(logs[i]);
            }
            else if(!s.empty()&&logs[i]=="../"){
                s.pop();
            }
        }
        int cnt=0;
        while(!s.empty()){
            s.pop();
            cnt++;
        }
        return cnt;
    }
};