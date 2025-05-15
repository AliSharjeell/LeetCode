class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        for(int i=0;i<groups.size();i++){
            if(i+1<groups.size()&&groups[i+1]==groups[i]){
                if(groups[i+1]==0){
                    groups[i+1]=-2;
                }else{
                    groups[i+1]=-1;
                }
            }else if(i+1<groups.size()&&groups[i]==-2&&groups[i+1]==0){
                groups[i+1]=-2;
            }else if(i+1<groups.size()&&groups[i]==-1&&groups[i+1]==1){
                 groups[i+1]=-1;
            }
        }
        vector<string> answer;
        for(int i=0;i<words.size();i++){
            if(groups[i]==-1||groups[i]==-2){
                continue;
            }
            answer.push_back(words[i]);
        }
        return answer;
    }
};