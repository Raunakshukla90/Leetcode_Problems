class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        vector<int>res(n);
        for(int i=0;i<n;i++){
          if(nums[i]%2==0){
            res[k]=nums[i];
            k++;
          }  
        }
         for(int i=0;i<n;i++){
          if(nums[i]%2!=0){
            res[k]=nums[i];
            k++;
          }  
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna