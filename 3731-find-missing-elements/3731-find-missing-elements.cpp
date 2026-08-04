class Solution {
public:
vector<int> findMissingElements(vector<int>& nums) {
    int n = nums.size();

    int mini = nums[0], maxi = nums[0];
    for(int i = 0; i < n; i++) {
        mini = min(mini, nums[i]);
        maxi = max(maxi, nums[i]);
    }

    unordered_set<int> s(nums.begin(), nums.end());

    vector<int> result;
    for(int i = mini; i <= maxi; i++) {
        if(s.find(i) == s.end()) {
            result.push_back(i);
        }
    }

    return result;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna