//gfg
queue<int> reverseFirstK(queue<int> q, int k) {
    if (q.empty() || k <= 0 || k > q.size()) return q;

    stack<int> st;

    // Step 1: Reverse first k elements
    for(int i = 0; i < k; i++){
        st.push(q.front());
        q.pop();
    }

    // Step 2: Push back reversed elements
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move remaining elements
    int a = q.size() - k; //other extra element which is not reversed
    for(int i = 0; i < a; i++){
        q.push(q.front());
        q.pop();
    }

    return q;
}
