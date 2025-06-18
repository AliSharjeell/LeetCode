class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int steps=0;
        for(int i=0;i<boxes.length();i++){
            for(int j=0;j<boxes.length();j++){
                if(j==i){
                    continue;
                }
                if(boxes[j]=='1'){
                    steps+=abs(i-j);
                }
            }
            answer.push_back(steps);
            steps=0;
        }
        return answer;
    }
};