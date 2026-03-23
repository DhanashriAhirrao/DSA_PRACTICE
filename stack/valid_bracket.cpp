string s;
stack<char>st;
for(int i=0;i<s.size();i++){
if(s[i]=='('){
st.push('(');
}
else{
if(st.empty()) return 0;
else st.pop();
}
}
return st.empty();

// T.C. = O(n) and S.C. =O(n)
