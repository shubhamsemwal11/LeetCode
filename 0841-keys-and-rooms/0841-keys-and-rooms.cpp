class Solution {
public:
    
    void dfs(int node, vector<vector<int>>& rooms, vector<bool>& visited) {
        
        visited[node] = true;
        
        for(auto x: rooms[node]) {
            
            if(!visited[x])
                dfs(x, rooms, visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
    
        vector<bool> visited(n, false);
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            
            if(!visited[i]) {
                
                count++;
                dfs(i, rooms, visited);
            }
        }
        
        return (count == 1);
    }
};