// class Solution {
// public:
//     vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
//         vector<vector<int>> a(n);
//         for(int l=0;l<n;l++)
//         {for(int i=0;i<edges.size();i++){
//             int pos =0;
//             for(int j=0;j<edges[0].size();j++){
//                 pos++;
//                 if(pos==2){
//                     for(int l =0;l<a[edges[i][j-1]].size();l++){
//                         a[edges[i][j]].push_back(a[edges[i][j-1]][l]);
//                     }
//                     a[edges[i][j]].push_back(edges[i][j-1]);
//                     // cout<<edges[i][j]<<edges[i][j-1]<<" ";
//                     sort(a[edges[i][j]].begin(),a[edges[i][j]].end());
//                 }
//             }
//         }}
//     for(int i = 0; i < a.size(); i++) {
//         if(a[i].empty()) {
//             continue;
//         }
//         for(int j = 0; j < a[i].size() - 1; j++) {
//             if(a[i][j] == a[i][j + 1]) {
//                 a[i].erase(a[i].begin() + (j + 1));
//                 j--;
//             }
//         }
//     }
//         return a;
//     }
// };
class Solution {
    void dfs(int x, int curr, vector<vector<int>>& ans, vector<vector<int>>& directChild) {
        for (int ch : directChild[curr]) {
            if (ans[ch].empty() || ans[ch].back() != x) {
                ans[ch].push_back(x);
                dfs(x, ch, ans, directChild);
            }
        }
    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans(n), directChild(n);
        for (auto& e : edges) {
            directChild[e[0]].push_back(e[1]);
        }
        for (int i = 0; i < n; i++) {
            dfs(i, i, ans, directChild);
        }
        return ans;
    }
};