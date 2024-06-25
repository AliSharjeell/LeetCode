class MinStack {
    vector<int> s;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:
    MinStack(){
        
    }
    
    void push(int val) {
        s.push_back(val);
        minHeap.push(val);
    }
    
    void pop() {
        int num=MinStack::top();
        s.pop_back();
        priority_queue<int, vector<int>, greater<int>> temp;
        int cnt=0;
        while(!minHeap.empty()){
            if(cnt<1&&num==minHeap.top()){
                cnt++;
            }
            else{
                temp.push(minHeap.top());
            }
            minHeap.pop();
        }
        minHeap = temp;
    }
    
    int top() {
        return s[s.size()-1];
    }
    
    int getMin() {
        return minHeap.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */