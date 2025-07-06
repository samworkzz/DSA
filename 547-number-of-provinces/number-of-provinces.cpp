class Solution {
public:
    void dfs(int src, vector<vector<int>>&adj, unordered_map<int,bool>&visited){
        visited[src]=true;

        for(auto nbr: adj[src]){
            if(!visited[nbr]){
                dfs(nbr,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n+1);
        unordered_map<int,bool>visited;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]!=0 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                count++;
            }
        }
        return count;
    }
};