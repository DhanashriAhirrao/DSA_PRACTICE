#include <bits/stdc++.h>
using namespace std;

//both way are correct



// void print(int arr[],int n,int i){
//     if(i==n){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     return print(arr,n,i+1);
// }

void print(int arr[],int n){
    if(n==-1){
        return ;
    }
    print(arr,n-1);
    cout<<arr[n]<<" ";
}
int main() {
	// your code goes here
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0])-1;
// 	int i=0;
	print(arr,n);
}
