class Solution {
public:
    bool checkDivisibility(int n) {
        int lastdigit;
        int sum=0;
        int product=1;
       int temp=n;
        while(temp>0){
            lastdigit=temp%10;
            sum=sum+lastdigit;
            product*=lastdigit;
            temp=temp/10;
        }
        if(n%(sum+product)==0) return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna