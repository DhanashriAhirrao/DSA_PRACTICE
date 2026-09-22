#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int main() 
{
    Node* head=NULL;
    Node* tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        //inserting element at start
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
    //adding element at end 
    tail->next=new Node(6);
    tail=tail->next;
    //printing elemnet 
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}
