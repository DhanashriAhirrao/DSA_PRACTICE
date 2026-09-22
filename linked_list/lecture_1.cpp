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


//Q.2) leetcode (876)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //way 1 TC = O(N) , SC=O(1)

        /* 
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            cnt+=1;
            temp=temp->next;
        }
        cnt/=2;
        temp=head;
        while(cnt){
            temp=temp->next;
            cnt--;
        }
        return temp;
        */

        //way 2 -> much faster

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};

//Q.3) leetcode (61)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt+=1;
            temp=temp->next;
        }
        k%=cnt;
        if(k==0){
            return head;
        }
        int step=cnt-k;
        temp=head;
        ListNode* nxt=NULL;
        while(step--){
            nxt=temp;
            temp=temp->next;
        }
        nxt->next=NULL;
        ListNode* prev=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return prev;
    }
};
