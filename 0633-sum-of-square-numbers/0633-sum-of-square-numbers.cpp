class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; a++) {
            long long target = c - a * a;
            long long left = 0, right = sqrt(target);

            while (left <= right) {
                long long mid = left + (right - left) / 2;
                long long sq = mid * mid;

                if (sq == target) return true;
                else if (sq < target) left = mid + 1;
                else right = mid - 1;
            }
        }
        return false;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna