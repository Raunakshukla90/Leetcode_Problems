class Solution {
public:
    char repeatedCharacter(string s) {
       vector<int> v(26);
        for(char c:s){
            v[c-'a']++;
            if(v[c-'a']>1)return c;
        }
        return 'a'; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna