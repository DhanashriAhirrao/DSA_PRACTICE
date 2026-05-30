node *convert(vector<int> &arr){
  node *head=new node(arr[0]);
  node *temp=head;
  for(int i=0;i<arr.size();i++){
    node *ele=arr[i];
    temp->next=ele;
    temp=ele;
  }
  return head;
}

#to insert at head of LL
node *inserth(node *head){
  int num;
  cin>>num;
  node *new=new node(num);
  new->next=head;
  head=new;
}

# to insert at end/tail
node *insertt(node *head){
  int num1;
  cin>>Num1;
  if(head==NULL) return new node(num1);
  while(temp->next!=NULL){
    temp=temp->next;
  }
  node *new1=new node(num1);
  temp->next=new1;
  new1=temp;
}

int main(){
  vector<int>arr=[1,2,3,4];
  node *head=convert(arr);
  head=inserth(head);
  tail=insertt(head);
}
