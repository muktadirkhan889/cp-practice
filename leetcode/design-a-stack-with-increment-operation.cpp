/* https://leetcode.com/problems/design-a-stack-with-increment-operation/ */
class CustomStack {
public:
    vector<int> stk;
    int msize;
    int cur_size=0;
    CustomStack(int maxSize) {
        this->msize = maxSize;
    }
    
    void push(int x) {
        if(stk.size()<msize) {
            stk.push_back(x);
            cur_size++;
        }
    }
    
    int pop() {
        if(stk.size()>0) {
            int top = stk.back();
            stk.pop_back();
            cur_size--;
            return top;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<min(cur_size,k);i++) {
            stk[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
