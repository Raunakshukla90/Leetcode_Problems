class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
             int sum=0;
            for(int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna