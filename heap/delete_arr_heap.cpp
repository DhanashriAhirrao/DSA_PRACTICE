#include <bits/stdc++.h>
using namespace std;

class mxheap{
    int *arr;
    int size;
    int ttl_size;
    public:
    mxheap(int n){
        ttl_size=n;
        arr = new int[n];
        size=0;
    }
    void insert(int val){
        if(size==ttl_size){
            return;
        }
        arr[size]=val;
        int index=size;
        size+=1;
        while(index>0 && arr[(index-1)/2]<arr[(index)]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        };
        cout<<arr[index]<<endl;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void heapfy(int index){
        int largest = index;
        int left=index*2+1;
        int right=index*2+2;
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=index){
            swap(arr[largest],arr[index]);
            heapfy(largest);
        }
    }
    void delt(){
        if(size==0){
            return;
        }
        arr[0]=arr[size-1];
        size-=1;
        if(size==0) return;
        heapfy(0);
    }
};

int main() {
	// your code goes here
	mxheap h1(6);
	h1.insert(3);
	h1.insert(1);
	h1.insert(5);
	h1.insert(4);
	h1.print();
	h1.delt();
	h1.print();
}

//heapify means -> when we delete -> we delte first node by putting last node on its place so we use heapify 
// so we can again arrange the heap 
