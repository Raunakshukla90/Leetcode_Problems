class Solution {
public:
    string toBinary(char c){
        int n=c;
        string s;
        while(n){
            s+=n%2+'0';// n%2 gives binary bit of that number 
            n/=2;
        }
        while(s.size()!=8){
            s+='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
    bool isPalindromic(string s) {
        int n=s.length();
       string ans;
       for(char& c:s) ans+=toBinary(c);

       for(int i=0,j=ans.length()-1;i<j;++i,--j){
        if(ans[i]!=ans[j]) return false;
       }
       return true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna