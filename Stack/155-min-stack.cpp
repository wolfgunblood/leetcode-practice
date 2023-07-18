class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        stk.push(val);

        if(minStack.empty() || val < minStack.top().first){
            minStack.push({val,1});
        }else if(val == minStack.top().first){
            minStack.top().second++;
        }
    }
    
    void pop() {
        
        if(stk.top() == minStack.top().first){
            minStack.top().second--;

            if(minStack.top().second == 0){

            minStack.pop();
            }
        }
        stk.pop();
    }
    
    int top() {
        
        return stk.top();
    }
    
    int getMin() {

        return minStack.top().first;
    }

    private:
        stack<int> stk;
        stack<pair<int,int>> minStack;
};  

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */