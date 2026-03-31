//gfg 

int celebrity(vector<vector<int>>& mat) {
        // code here
        stack<int>st;
        int n=mat.size();
        for(int i=n-1;i>=0;i--){
            st.push(i);
    }
    int first;
    int second;
    while(st.size()>1){
         first=st.top();
         st.pop();
         second=st.top();
         st.pop();
         if (mat[first][second] == 1)
         st.push(second);
         else
         st.push(first);
        
    }
    if(st.empty()){
        return -1;
    }
    int num=st.top();
    st.pop();
    int row=0;
    int col=0;
    for(int i=0;i<n;i++){
        if( i==num) continue;
        col+=mat[i][num];
        row+=mat[num][i];
    }
   if(row==0&&col==n-1) return num;
   return -1;
        
    }
