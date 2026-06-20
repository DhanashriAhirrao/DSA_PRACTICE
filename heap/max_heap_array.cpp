#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=i*2+1;
    int right=i*2+2;
    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void buildheap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}

void printheap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main() {
	int arr[]={10,3,8,9,5,13,18,14,11,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	buildheap(arr,n);
	printheap(arr,n);
}
