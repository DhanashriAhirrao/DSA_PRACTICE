 int main(){
   node *next=NULL;
   node *tail=NULL;
   int arr={1,2,3,4,5};
   for(int i=0;i<arr.size();i++){
     //no linked list exist
     if(head==NULL){
       head=new node(arr[i]);
       tail=head;
     }
     //if linked list exist already  
     else{
       node *temp=new node(arr[i]);
       tail->next=temp;
       temp->prev=tail;
       tail=temp;
     }
   }
   // for traversing through the LL
   node *ans=head;
   while(ans){
     cout<<ans->data;
     ans=ans->next;
   }
 }

--------------------------
//if have to add extra element at start

//if no ll exist 
  node *head=new node(arr[i]);
//if ll exist
  node *temp1=new node(arr[i]);
  temp1->next=head;
  head->prev=temp1;
  head=temp1;

------------------------------
// if have to add extra element at end

node *temp2=new node(arr[i]);
temp2->prev=tail;
tail->next=temp2;
tail=temp2;
  
  
