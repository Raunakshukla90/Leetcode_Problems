class MyStack {
public:
      queue<int>q;
       queue<int>r;
    MyStack() {
        
    }
    
    void push(int x) {
       r.push(x);
        int n = q.size();
        // Move previous elements behind the new one
      while(!q.empty()) {
            r.push(q.front());
            q.pop();
        }
          // q should contain the stack in reverse order
        swap(q, r);
        
    }
    
    int pop() {
        int topelement=q.front();
        q.pop();
        return topelement;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna