class MyStack {
public:

    stack<int> st;

    MyStack() {

    }

    void push(int x) {
        st.push(x);
    }

    int pop() {
        int data = st.top();
        st.pop();
        return data;
    }

    int top() {
        return st.top();
    }

    bool empty() {
        return st.empty();
    }
};