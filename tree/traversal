#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
//all 3 way of traversal
void pre_order(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    pre_order(root->left);
    pre_order(root->right);
}
void in_order(Node *root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data;
    in_order(root->right);
}
void post_order(Node *root){
    if(root==NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data;
}
//to create tree
Node *Binary_tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp=new Node(x);
    cout<<"enter left element "<<temp->data<<" : ";
    temp->left=Binary_tree();
    cout<<"enter right element "<<temp->data<<" : ";
    temp->right=Binary_tree();
    return temp;
}
int main() 
{
     cout<<"enter root element : ";
     Node *root;
     //tree formation
     root=Binary_tree();

     cout<<"pre_order way : ";
     pre_order(root);

     cout<<"in_order way : ";
     in_order(root);

     cout<<"post_order way : ";
     post_order(root);
}
