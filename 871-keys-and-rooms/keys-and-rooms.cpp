// class Solution {
// public:
//     bool canVisitAllRooms(vector<vector<int>>& rooms) {
//        unordered_map<int,int> a;
//        for(int i=0;i<rooms.size();i++){
//             for(int j=0;j<rooms[i].size();j++){
//                 a[rooms[i][j]]=1;
//             }
//             if(i!=rooms.size()-1&&a.find(i+1)==a.end()){
//                 return false;
//             }
//        } 
//        return true;
//     }
// };
class Solution {
    unordered_set<int> visited;;
public:
    void solve(vector<vector<int>>& rooms,int index){
        visited.insert(index);
        for(int j = 0; j < rooms[index].size(); j++) {
            if(visited.find(rooms[index][j]) == visited.end()) {
                solve(rooms, rooms[index][j]);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
            solve(rooms,0);
            return visited.size() == rooms.size();
    }
};