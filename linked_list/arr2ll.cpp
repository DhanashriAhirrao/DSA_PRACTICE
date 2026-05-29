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

int main(){
  vector<int>ans=[1,2,3,4]
  node* head=arr2ll(ans);
  cout<<head->data;
}
