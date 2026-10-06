class Solution {
public:
    bool dfs(int ind, vector<vector<int>>& adj, vector<int>& vis, vector<int>& pathVis){
        vis[ind] = 1;
        pathVis[ind] = 1;

        for(auto node : adj[ind]){
            if(!vis[node]){
                if(dfs(node, adj, vis, pathVis) == true) return true;
            }

            else if(pathVis[node]) return true;
        }
        pathVis[ind] = 0;
        return false;
    }


    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        int n = pre.size();
        vector<vector<int>> adj(numCourses);
        for(int i = 0 ; i < n; i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        int v = adj.size();
        vector<int> vis(v, 0);
        vector<int> pathVis(v, 0);

        for(int i = 0; i < v; i++)
        {
            if(!vis[i]){
                if(dfs(i, adj, vis, pathVis) == true) return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna