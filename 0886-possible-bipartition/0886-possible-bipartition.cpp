class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        
        vector<int> adj[n];
        vector<int> color(n, -1);
        
        for(auto dislike: dislikes) {
            
            adj[dislike[0] - 1].push_back(dislike[1] - 1);
            adj[dislike[1] - 1].push_back(dislike[0] - 1);
        }
        
        for(int i = 0; i < n; i++) {
            
            if(color[i] == -1) {
                
                color[i] = 0;
                queue<int> q;
                q.push(i);
                
                while(!q.empty()) {
                    
                    int node = q.front();
                    q.pop();
                    
                    for(auto x: adj[node]) {
                        
                        if(color[x] == -1) {
                            
                            color[x] = !color[node];
                            q.push(x);
                        }
                        
                        else if(color[x] == color[node])
                            return false;
                    }
                }
            }
        }
        
        return true;
    }
};