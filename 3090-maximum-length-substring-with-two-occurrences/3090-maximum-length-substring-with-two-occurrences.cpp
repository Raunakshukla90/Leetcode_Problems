class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res = 0;
        int fq[26] = {0};

        for (int l = 0, r = 0; r < s.length(); r++) {
            fq[(s[r] & 31) - 1]++;

            while (fq[(s[r] & 31) - 1] > 2)
                fq[(s[l++] & 31) - 1]--;

            res = max(res, r - l + 1);
        }

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna