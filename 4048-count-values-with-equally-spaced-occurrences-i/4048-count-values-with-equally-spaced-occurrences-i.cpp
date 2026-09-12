class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>pos;
        int n=nums.size();
        for(int i=0;i<n;i++){
           pos[nums[i]].push_back(i);
        }
        int ans=0;
       for (auto& [x, indices] : pos){
           if(indices.size()==3){
               int i1=indices[0];
               int i2=indices[1];
               int i3=indices[2];
               if(i2-i1==i3-i2){
                   ans++;
               }
           }
       }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna