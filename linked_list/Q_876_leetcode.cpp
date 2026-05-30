node *curr=head;
node *ans=head;
int cnt=0;
while(curr!=NULL){
  cnt++;
  curr=curr->next;
}
int a=cnt/=2;
while(a){
  ans=ans->next;
  a--;
}
return ans;
