class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> freq(n,0);
            for(int i=0;i<roads.size();i++){
                for(int j=0;j<roads[0].size();j++){
                        freq[roads[i][j]]++;
                }
            }
        sort(freq.begin(),freq.end());
        long long sum=0;
        for(int i = freq.size()-1;i>=0;i--){
            // cout<< freq[i]*(i+1) <<" ";
            sum+=(freq[i]*(i+1));
        }
        return sum;
    }
};