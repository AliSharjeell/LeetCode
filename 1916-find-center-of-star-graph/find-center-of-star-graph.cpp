class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int first = edges[0][0];
        int second = edges[0][1];
        int common;
        for(int i=1;i<edges.size();i++){
            for(int j=0;j<edges[i].size();j++){
                if(first == edges[i][j]){
                    return first;
                }
                if(second == edges[i][j]){
                    return second;
                }
            }
        }
        return 0;
    }
};