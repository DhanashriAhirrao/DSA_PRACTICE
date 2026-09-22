//Q.1) leetcode (206) 
class Solution {
public:
    ListNode* reverse(ListNode* curr,ListNode* prev){
        if(curr==NULL){
            return prev;
        }
        ListNode*fut=curr->next;
        curr->next=prev;
        return reverse(fut,curr);
    }

    ListNode* reverseList(ListNode* head) {
        //way 1
        
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size()-1;
        ListNode* curr=head;
        for(int i=n;i>=0;i--){
            curr->val=ans[i];
            curr=curr->next;
        }
        return head;
        

        //way 2
        
        ListNode* temp=head;
        ListNode* fut=temp;
        ListNode* prev=NULL;
        while(temp){
            fut=temp->next;
            temp->next=prev;
            //fut->next=temp;
            prev=temp;
            temp=fut;
        }
        head=prev;
        return head;
        

        //way 3 : using recursion so function return above is part of this method
        return reverse(head,NULL);
    }
};
