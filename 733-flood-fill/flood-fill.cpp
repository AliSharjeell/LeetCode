class Solution {
    void dfs(int i,int j,vector<vector<int>>& image,vector<vector<int>>& visited,int color, int val){
        visited[i][j] = 1;
        image[i][j] = color;
        if(i+1<image.size()&&image[i+1][j]==val&&!visited[i+1][j])
            dfs(i+1,j,image,visited,color,val);
        if(j+1<image[0].size()&&image[i][j+1]==val&&!visited[i][j+1])
            dfs(i,j+1,image,visited,color,val);
        if(j-1>=0&&image[i][j-1]==val&&!visited[i][j-1])
            dfs(i,j-1,image,visited,color,val);
        if(i-1>=0&&image[i-1][j]==val&&!visited[i-1][j])
            dfs(i-1,j,image,visited,color,val);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> visited(image.size(),vector<int>(image[0].size(),0));
        dfs(sr,sc,image,visited,color,image[sr][sc]);
        return image;
    }
};