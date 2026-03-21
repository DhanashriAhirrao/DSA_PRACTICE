// with T.C. O(n)
vector<char> s; //hello
stack<char>st;
for(int i=0;i<s.size();i++){
st.push(s[i]);
}
int i=0;
while(!st.empty){ //st.empty()=1 if no element in stack
s[i]=st.top();
st.pop();
i++;
}
