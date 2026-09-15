class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()==goal.size()){
            string str=s+s;
         if(str.find(goal)!=string::npos)
         return true;
       }   

     return false;

    }
};




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna