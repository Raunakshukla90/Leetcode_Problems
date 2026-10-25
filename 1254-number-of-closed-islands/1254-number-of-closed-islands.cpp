class Solution {
public:
     int m,n;
     bool dfs(vector<vector<int>>& grid,int r,int c){
       if(r>=m || r<0||c>=n || c<0) return false;  //out of bound 
       if(grid[r][c]==1) return true;
      grid[r][c]=1;
       bool left=dfs(grid,r,c-1);
        bool right=dfs(grid,r,c+1);
        bool top=dfs(grid,r-1,c);
        bool bottom=dfs(grid,r+1,c);
       return left && right && top && bottom;
     }
    int closedIsland(vector<vector<int>>& grid) {
       m=grid.size();
       n=grid[0].size();
       int count=0;
       for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if(grid[i][j]==0){//land
            if(dfs(grid,i,j)==true) count++;

            }
          }
       }
       return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna