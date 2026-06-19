#include <bits/stdc++.h>
using namespace std;

class mnheap{
    int *arr;
    int size;
    int ttl_size;
    public:
    mnheap(int n){
    arr=new int[n];
    size=0;
    ttl_size=n;    
    }
    void insert(int val){
        if(size==ttl_size){
            return ;
        }
        arr[size]=val;
        int idx=size;
        size+=1;
        while(idx>0 && arr[(idx-1)/2]>arr[idx]){
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
    }
};

int main() {
	mnheap h1(6);
	h1.insert(4);
	h1.insert(6);
	h1.insert(3);
	h1.insert(7);
	h1.insert(5);
	h1.insert(2);
	h1.print();
}
