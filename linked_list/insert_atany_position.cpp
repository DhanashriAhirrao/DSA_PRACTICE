node* arr2ll(vector<int> &ans){
  node *head= new node(ans[0]);
  node *ele=head;
  for(int i=0;i<ans.size();i++){
    node *temp=new node(ans[i]);
    ele->next=temp;
    ele=temp;
  }
  return head;
}

node *insertpos(node *head,int k,int val){
  if(head==NULL){
    if(k==1){
      node *new=new node(val);
    }
    else{
      return head;
    }
  }
  else if(k==1){
    node *new=new node(val,head);
  }
  int cnt=0;
  while(temp->next!=NULL){
    cnt++;
    if(cnt==k-1){
      node *new=new node(val,temp->next);
      temp->next=new;
      break;
    }
    temp=temp->next;
}
  return head;
}

int main(){
  vector<int>ans=[1,2,3,4]
  node* head=arr2ll(ans);
  cout<<head->data;
  head=node *insertpos(head,int k,int ele);
}
