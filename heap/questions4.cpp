// Q. merge two binary max heap 
//approach 1 : 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={10,5,6,2};
	int arr2[]={12,9,7};
	vector<int>ans;
	for(int x: arr){
	    ans.push_back(x);
	}
	for(int x: arr2){
	    ans.push_back(x);
	}
	priority_queue<int>pq;
	for(int x : ans){
	    pq.push(x);
	}
	while(!pq.empty()){
	    cout<<pq.top()<<" ";
	    pq.pop();
	}
}

//approach 2 :
#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>&ans,int i,int n){
    int largest=i;
    int left=i*2+1;
    int right=i*2+2;
    if(left<n && ans[left]>ans[largest]){
        largest=left;
    }
    if(right<n && ans[right]>ans[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(ans[largest],ans[i]);
        heapify(ans,largest,n);
    }
}

int main() {
	int arr[]={10,5,6,2};
	int arr2[]={12,9,7};
	vector<int>ans;
	for(int i=0;i<4;i++){
	    ans.push_back(arr[i]);
	}
	for(int j=0;j<3;j++){
	    ans.push_back(arr2[j]);
	}
	int n=4+3; //size of both arrays
	for(int i=n/2-1;i>=0;i--){
	    heapify(ans,i,n);
	}
	for(int x : ans){
	    cout<<x<<" ";
	}
}

// Q.

