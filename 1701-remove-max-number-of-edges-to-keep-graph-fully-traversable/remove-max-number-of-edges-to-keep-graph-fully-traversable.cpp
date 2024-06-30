class DSU {
    vector<int> parent;
public:
    DSU(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int Find(int x) {
        return parent[x] == x ? x : parent[x] = Find(parent[x]);
    }
    
    bool Union(int x, int y) {
        int rootX = Find(x);
        int rootY = Find(y);
        
        if (rootX != rootY) {
                parent[rootY] = rootX;
                return true;
        }
        return false;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        sort(edges.begin(), edges.end(), greater<vector<int>>());
        
        DSU alice(n + 1);
        DSU bob(n + 1);

        int removedEdges = 0;
        int aliceEdges = 0;
        int bobEdges = 0;

        for ( int i =0 ; i<edges.size();i++) {
            int type = edges[i][0];
            int u = edges[i][1];
            int v = edges[i][2];
            
            if (type == 3) {
                if (alice.Union(u, v) && bob.Union(u, v)) {
                    aliceEdges++;
                    bobEdges++;
                } else {
                    removedEdges++;
                }
            } else if (type == 2) {
                if (bob.Union(u, v)) {
                    bobEdges++;
                } else {
                    removedEdges++;
                }
            } else if (type == 1) {
                if (alice.Union(u, v)) {
                    aliceEdges++;
                } else {
                    removedEdges++;
                }
            }
        }

        if (aliceEdges == n - 1 && bobEdges == n - 1) {
            return removedEdges;
        } else {
            return -1;
        }
    }
};