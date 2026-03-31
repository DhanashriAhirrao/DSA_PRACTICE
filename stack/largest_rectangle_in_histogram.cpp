// leetcode 84

int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
        //smallet to right
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
                right[st.top()]=n;
                st.pop();
            }
        //smallest to left    
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
                left[st.top()]=-1;
                st.pop();
            }
        // maximum area    
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,(right[i]-left[i]-1)*heights[i]);
        }

        return mx;
    }
