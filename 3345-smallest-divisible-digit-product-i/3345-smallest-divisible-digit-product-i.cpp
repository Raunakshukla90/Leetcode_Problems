class Solution {
public:
    int smallestNumber(int n, int t) {
        int number=n;
        
        int product;
        int lastdigit;
        while(true){
            product=1;
            number=n;
        while(number>0){
               lastdigit=number%10;
               product*=lastdigit;
               number/=10;
        }
        
        if(product%t==0) break;
        n++;
        }
        return n;
           
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna