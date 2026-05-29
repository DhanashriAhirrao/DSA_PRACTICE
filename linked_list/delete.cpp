node* convertar2ll(vector<int> &ans){
  node *head=new node(arr[0]);
  node *temp=head;
  for(int i=0;i<ans.size();i++){
    node *ele=new node(arr[i]);
    temp->next=ele;
    temp=ele;
  }
  return head;
}

node *del(node *head){
  if(head==NULL){
    return head;
  }
  else{
    node *ok=head->next;
    delete ok;
    return head;
}

int main(){
  vector<int>ans=[1,2,3,4];
  node *new=convertar2ll(ans);
  new=del(new);
  print(new);
}
