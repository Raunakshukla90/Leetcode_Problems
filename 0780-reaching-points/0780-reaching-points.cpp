class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
      
        while(tx >= sx && ty >= sy){
            if(tx > ty) {
                if(sy == ty) return (tx - sx) % ty == 0;
                tx %= ty;
            }
            else {
                if(sx == tx) return (ty - sy) % tx == 0;
                ty %= tx;
            }
        }
        return false; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna