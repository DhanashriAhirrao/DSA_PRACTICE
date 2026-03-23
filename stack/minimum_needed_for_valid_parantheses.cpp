//T.C O(n) and S.C O(N)
string s;
stack<char>st;
int count=0;
for(int i=0;i<s.size();i++){
if(s[i]=='('){
st.push('(');
}
else{
  if(st.empty()){
  count++;
  }
  else{
  st.pop();
}
}
}
return st.size()+count;


//T.C O(n) and S.C O(1)
string s;
int left=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                left++;
            }
            else{
                if(left==0) count++;
                else left--;
            }
        }
        return left+count;
        
