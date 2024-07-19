class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            int min=INT_MAX;
            int mini;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                    mini=j;
                }
            }
            int max=0;
            for(int j=0;j<matrix.size();j++){
                if(max<matrix[j][mini]){
                    max=matrix[j][mini];
                }
            }
            if(max==min){
                return {max};
            }
        }
        return {};
    }
};