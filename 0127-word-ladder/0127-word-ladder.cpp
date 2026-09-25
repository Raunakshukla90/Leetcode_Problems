class Solution {
public:
    int ladderLength(string bW, string eW, vector<string>& wL) {
        unordered_set<string> s(wL.begin(), wL.end());

        if(!s.count(eW)) return 0;
        queue<pair<int, string>> q;
        q.push({0, bW});
        s.erase(bW);

        while(!q.empty()){
            auto elem = q.front();
                
            int steps = elem.first;
            string w = elem .second;

            q.pop();

            if(w == eW) return steps + 1;

            for(int i = 0; i < w.size(); i++){
                char og = w[i];
                for(char ch = 'a'; ch <= 'z'; ch++){
                    w[i] = ch;
                    if(s.find(w) != s.end()){
                        q.push({steps + 1, w});
                        s.erase(w);
                    } 
                }
                w[i] = og;
            }
        }

        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna