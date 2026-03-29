//gfg 
//(bruteforce)
  vector<int> leftSmaller(vector<int> arr) {
        // code here
        // int n=arr.size();
        // vector<int>ans(n,-1);
        // for (int i=n-1;i>=0;i--){
        //     for(int j=i-1;j>=0;j--){
        //         if(arr[j]<arr[i]){
        //             ans[i]=arr[j];
        //             break;
        //         }
        //     }
        // }
        // return ans;
}
};

//(optimal)
 vector<int> leftSmaller(vector<int> arr) {
       int n=arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>arr[i]){
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
        }
        return ans;
    }
};
