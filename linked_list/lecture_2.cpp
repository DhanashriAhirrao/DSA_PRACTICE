//Q.1) Leetcode (19)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        int cnt=0;
        ListNode* temp=head;
        while(temp){
            cnt+=1;
            temp=temp->next;
        }
        cnt-=n;
        temp=head;
        ListNode* prev=NULL;
        while(cnt--){
            prev=temp;
            temp=temp->next;
        }
        //removing head node means cnt==0 and above while loop never worked
        if(prev==NULL){
            head=temp->next;
            delete temp;
            return head;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};
