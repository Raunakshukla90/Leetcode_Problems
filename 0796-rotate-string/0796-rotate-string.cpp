class Solution {
public:
    bool rotateString(string s, string goal) {
     return s.size()==goal.size()? (s+s).find(goal)!=string::npos?true:false:false;
    }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna