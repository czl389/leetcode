class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
        stack1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(!stack1.empty()) {
            int popValue=stack1.top();
            stack2.push(popValue);
            stack1.pop();
        }
        stack2.pop();
        while(!stack2.empty()) {
            int popValue=stack2.top();
            stack1.push(popValue);
            stack2.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        while(!stack1.empty()) {
            int popValue=stack1.top();
            stack2.push(popValue);
            stack1.pop();
        }
        int result=stack2.top();
        while(!stack2.empty()) {
            int popValue=stack2.top();
            stack1.push(popValue);
            stack2.pop();
        }
        return result;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if(stack1.empty())
            return true;
        else
            return false;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};