class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int cost=0;
        int result=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                result+=prices[i]-prices[i-1];
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna