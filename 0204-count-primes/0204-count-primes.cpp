class Solution {
public:  
       void fullsieve(vector<bool>&sieve){
        int n=sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*2;j<=n;j+=i){
                sieve[j]=0;
            }
        }
       }
       int countPrimes(int n){
        if(n<=2) return 0;
        n=n-1;
        vector<bool>sieve(n+1,1);
        fullsieve(sieve);
        sieve[0]=0;
        sieve[1]=0;
        int count=0;
        for(int i=2;i<=n;i++){
            if(sieve[i]==1) count++;
        }
        return count;
       }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna