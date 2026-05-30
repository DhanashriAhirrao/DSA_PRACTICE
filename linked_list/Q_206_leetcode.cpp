Node *curr=head;
Node *prev=NULL;
Node *fut=NULL;
while(curr!=NULL){
  fut=curr->next;
  curr->next=prev;
  prev=curr;
  curr=fut;
}
head=prev;
return head;
