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
Node* Binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp=new Node(x);
    //creating left side
    cout<<"enter left side of "<<x<<" : ";
    temp->left=Binarytree();
    //creating right side
    cout<<"entering right side of "<<x<<" : ";
    temp->right=Binarytree();
    return temp;

}

int main() 
{
    cout<<"enter root element : ";
    Node* root;
    root=Binarytree();
}
