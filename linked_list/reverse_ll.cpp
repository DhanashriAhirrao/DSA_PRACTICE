ListNode* reverseList(ListNode* head) {
  ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* fut=NULL;
        while(curr != NULL){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
            }
            head=prev;
            return head;
            }
