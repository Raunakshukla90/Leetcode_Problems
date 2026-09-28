class Solution {
public:
    int maxDepth(string s) {
       int sol = 0, curr = 0;
        for(auto it : s){
            if(it == '('){
                curr++;
                sol = max(curr, sol);
            }else if(it == ')'){
                curr--;
            }
        }
        return sol;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna