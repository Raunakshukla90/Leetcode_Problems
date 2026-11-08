class Solution {
public:
    string convertToBase7(int n) {
         if (n < 0) return "-" + convertToBase7(-n);
        if (n < 7) return to_string(n);
        return convertToBase7(n / 7) + to_string(n % 7); 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna