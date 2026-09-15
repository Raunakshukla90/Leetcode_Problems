class Solution {
public:
    string capitalizeTitle(string title) {
        int n=title.length();
        int start=0;
         for(int i=0;i<=n;i++){
           if(title[i]==' '|| i==title.length()){
              if(i-start>2)
                title[start] = title[start] -32;  //('a'-'A') for 32
                start=i+1;
              
           }
          

           else if(title[i] >= 'A' && title[i] <= 'Z')
            {
                title[i] = title[i] + 32;  //('a'-'A') for 32
            }
         }
         return title;
        
           
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna