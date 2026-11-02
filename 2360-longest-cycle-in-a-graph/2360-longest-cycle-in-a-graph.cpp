class Solution {
public:
    int ans=-1;
    void dfs(int node,int sz,vector<int>&vis,vector<int>&pathvis,vector<int>adj[]){
        vis[node]=1;
        pathvis[node]=sz;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,sz+1,vis,pathvis,adj);
            }
            else if(pathvis[it]!=0){
                 ans=max(ans,sz-pathvis[it]+1);
            }
        }
        pathvis[node]=0;
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            int v=edges[i];
            int u=i;
            if(v!=-1) adj[u].push_back(v);
        }
        vector<int>vis(n,0),pathvis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                dfs(i,1,vis,pathvis,adj);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna