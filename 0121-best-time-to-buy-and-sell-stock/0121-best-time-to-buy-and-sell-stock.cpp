class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int bestbuy=prices[0];
       int maximumprofit=0;
       for(int i=0;i<n;i++){
        if(prices[i]>bestbuy){
            maximumprofit=max(maximumprofit,prices[i]-bestbuy);
        }
        bestbuy=min(bestbuy,prices[i]);
       }
       return maximumprofit;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna