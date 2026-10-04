class Solution {
public:
bool checkValidString(string s){
    stack<int> op;
    stack<int> st;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(') op.push(i);
        else if(s[i]=='*') st.push(i);
        else{
            if(!op.empty()) op.pop();
            else if(!st.empty()) st.pop();
            else return false;
        }
    }
    while(!op.empty()){
        if(st.empty()) return false;
        else if(st.top()>op.top()) {st.pop();op.pop();}
        else return false;
    }
    return true;
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna