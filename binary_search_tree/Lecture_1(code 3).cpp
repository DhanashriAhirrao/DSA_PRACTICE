//1)  Learning Insertion : to build binary search tree

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//creating tree
Node* insert(Node* root,int target){
    if(!root){
        Node* temp=new Node(target);
        return temp;
    }
    if(root->data>target){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}

void inorder(Node* root){
    if(!root){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    int arr[]={1,12,3,4,15};
    Node *root=NULL;
    for(int i=0;i<5;i++){
        root=insert(root,arr[i]);
    }

    //for traversing and printing -> use inorde so it followed decrease sequence
    inorder(root);
}


/*---------------------------------------------------------------------------------------------*/

// 2)  

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//creating tree
Node* insert(Node* root,int target){
    if(!root){
        Node* temp=new Node(target);
        return temp;
    }
    if(root->data>target){
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}

void inorder(Node* root){
    if(!root){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root,int num){
    if(!root){
        return 0;
    }
    if(root->data==num){
        return 1;
    }
    if(num<root->data){
        return search(root->left,num);
    }
    else{
        return search(root->right,num);
    }
}

int main() {
    int arr[]={1,12,3,4,15};
    Node *root=NULL;
    for(int i=0;i<5;i++){
        root=insert(root,arr[i]);
    }

    //if 'num' is present we will return 1 otherwise we will return 0

    int num;
    cout<<"enter num : ";
    cin>>num;
    cout<<search(root,num);
}


/*---------------------------------------------------------------------------------*/


//GFG - Delete from BST 

/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        // code here
        if(!root){
            return NULL;
        }
        if(root->data>x){
            root->left=delNode(root->left,x);
            return root;
        }
        else if(root->data<x){
            root->right=delNode(root->right,x);
            return root;
        }

        //when we find node where 'x' is present
        else{
            //node is leaf node
            if(!root->left && !root->right){
                delete root;
                return NULL;
            }
            // node have 1 child node (either left or right)
            else if(!root->left){
                //means right child exist of node 
                Node* temp=root->right;
                delete root;
                return temp;
            }
            else if(!root->right){
                //means left child exist of node
                Node* temp=root->left;
                delete root;
                return temp;
            }
            else{
                //both child of node exist

                //find greatest element to left of that node so we canreplace it with the node we are deleting and it will not cause any error
                Node* child=root->left;
                Node* parent = root;

                //right most node tak pahuchna hai
                while(child->right){
                    parent=child;
                    child=child->right;
                }
                if(root!=parent){
                    parent->right=child->left;
                    child->left=root->left;
                }
                child->right=root->right;
                delete root;
                return child;

            }
        }
    }
};
