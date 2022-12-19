class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        
        for(auto x: edges) {
            
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        vector<bool> visited(n, false);
        queue<int> q;
        
        visited[source] = true;
        q.push(source);
        
        while(!q.empty()) {
            
            int cur = q.front();
            q.pop();
            
            if(cur == destination)
                return true;
            
            for(auto x: adj[cur]) {
                
                if(!visited[x]) {
                    
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
        
        return false;
    }
};