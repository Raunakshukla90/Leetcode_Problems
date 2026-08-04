class Solution {
public:
    int mirrorReflection(int p, int q) {
        //here we reduce bigger number
     while (p%2==0 && q%2==0) {
		p = p / 2;
		q = q / 2;
	}
	

	if (p%2 == 0)
		return 2;
	   
    
    if (q%2 == 0)
		return 0;
	
	return 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna