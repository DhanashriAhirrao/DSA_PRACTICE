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
  void insert(int val){
      if(size==ttl_size){
          cout<<"heap overflow";
          return;
      }
      arr[size]=val;
      int idx=size;
      size+=1;
      while(idx>0 && arr[(idx-1)/2]<arr[idx]){
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
	maxheap h1(6);
	h1.insert(4);
	h1.insert(14);
	//h1.insert(1);
	h1.insert(11);
	h1.insert(10);
	h1.insert(3);
	h1.insert(15);
	h1.print();
	
}
