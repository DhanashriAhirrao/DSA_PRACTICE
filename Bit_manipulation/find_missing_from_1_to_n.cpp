//Q.268 -> a bit different 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[]={1,2,3,5,6};//12345
    int xor1=0;
    int xor2=0;
    int n=sizeof(arr)/sizeof(arr[0]);//5
    for(int i=1;i<=n+1;i++){
        xor1^=i;
    }
    for(int i=0;i<n;i++){
        xor2^=arr[i];
    }
    cout<< (xor1^xor2) ;
    return 0;
}
