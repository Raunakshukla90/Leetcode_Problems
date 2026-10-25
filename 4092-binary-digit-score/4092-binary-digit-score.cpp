class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = 0, s2 = 0;
        while(1){
            if(a>0) a = a&(a-1) , s1++ ;
            if(b>0) b = b&(b-1) , s2++ ; 
            
            if(!(a>0 || b>0))  break ;
        }
        
        return (s1 >= s2) ? s1*s2 : s2/s1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna