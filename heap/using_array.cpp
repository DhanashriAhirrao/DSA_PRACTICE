#include <bits/stdc++.h>
using namespace std;
class maxheap{
    int *arr;
    int size;
    int ttl_size;
    public:
    maxheap(int n){
        arr=new int[n];
        size=0;
        ttl_size=n;
    }
    //insert operator
    void insert(int val){
        if(size==ttl_size){
            cout<<"overflow";
            return;
        }
        arr[size]=val;
        int idx=size;
        size+=1;
        //comparing with parent node
        while(idx>0 && arr[(idx-1)/2]<arr[(idx)]){
            swap(arr[(idx-1)/2],arr[idx]);
            idx=(idx-1)/2;
        };
        cout<<arr[idx]<<" ";
        
        cout<<endl;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
	// your code goes here
	maxheap h1(7);
	h1.insert(3);
	h1.insert(5);
	h1.insert(7);
	h1.insert(8);
	h1.insert(7);
	h1.insert(10);
	h1.insert(12);
	h1.print();
}
