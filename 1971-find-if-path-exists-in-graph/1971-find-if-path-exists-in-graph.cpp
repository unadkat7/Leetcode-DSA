class Solution {
private:
    bool dfs(int src,int dest,vector<vector<int>>& graph,vector<bool>&visited){
        if(src==dest){
            return true;
        }

        visited[src]=true;
        for(int ne: graph[src]){
            if(visited[ne]!=true){
                if(dfs(ne,dest,graph,visited)){
                    return true;
                }
            }
        }

        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);

        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }   

        vector<bool>visited(n);

        return dfs(source,destination,graph,visited);
    }
};