//T.C.- O(n) and S.C.-O(n)
//gfg - Insert an Element at the Bottom of a Stack

stack<int>st;
int a=2; //any random number
stack<int>temp;
while(!st.empty()){
  temp.push(st.top());
  st.pop();
}
st.push(a);
while(!temp.empty()){
  st.push(temp.top());
  temp.pop();
}
