class Solution {
public:
    
    void dfs(int node, vector<int> adj[], vector<bool>& visited) {
        
        visited[node] = true;
        
        for(auto x: adj[node]) {
            
            if(!visited[x])
                dfs(x, adj, visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        
        vector<int> adj[n];
        vector<bool> visited(n, false);
        int count = 0;
        int i = 0;
        
        for(auto x: rooms) {
            
            for(int y: x)
                adj[i].push_back(y);
            i++;
        }
        
        for(int i = 0; i < n; i++) {
            
            if(!visited[i]) {
                
                count++;
                dfs(i, adj, visited);
            }
        }
        
        return (count == 1);
    }
};