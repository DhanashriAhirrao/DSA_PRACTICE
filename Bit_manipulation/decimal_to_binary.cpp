int n;
cin>>n;
string ans="";
while(n){
  int a=n%2;
  if(a==1){
    ans+='1';
  }
  else{
    ans+='0';
  }
  n/=2;
}
cout<<reverse(ans);
