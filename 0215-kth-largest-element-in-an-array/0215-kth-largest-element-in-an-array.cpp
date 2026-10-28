class Solution {
public:  


int findKthLargest(vector<int>& nums, int k) {
    int n=nums.size();
    priority_queue<int,vector<int>,greater<int>>pq;//min heap
    for(int i=0;i<n;i++){
        pq.push(nums[i]);
        if(pq.size()>k) pq.pop();
    }
     return pq.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna