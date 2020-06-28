/* https://leetcode.com/problems/min-stack/ */
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> spl_stk, aux_stk;
    MinStack() {
        
    }
    
    void push(int x) {
        spl_stk.push(x);
        if(aux_stk.size()==0 || x<aux_stk.top()) 
            aux_stk.push(x);
        else if(x>=aux_stk.top()) 
            aux_stk.push(aux_stk.top());
    }
    
    void pop() {
        if(spl_stk.size()>0) {
            spl_stk.pop();
            aux_stk.pop();
        }
    }
    
    int top() {
        return spl_stk.top();
    }
    
    int getMin() {
        return aux_stk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
