//gfg  -> minimum cost of ropes
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>p;
        for(int x:arr){
            p.push(x);
        }
        int cost=0;
        while(p.size()>1){
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            int sm=a+b;
            cost+=sm;
            p.push(sm);
        }
        return cost;
    }
};

//gfg -> height of heap 
class Solution {
  public:
    int heapHeight(int n, int arr[]) {
        // code here
        if(n==1){
            return 1;
        }
        int cal=0;
        while(n>1){
            cal+=1;
            n/=2;
        }
        return cal;
    }
};

//magician and choclates
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[]={5,6};
	int a=3;
	priority_queue<int>pq ;
	for(int x:arr){
	    pq.push(x);
	}
	int ans=0;
	while(a){
	    int b=pq.top();
	    pq.pop();
	    ans+=b;
	    pq.push(b/2);
	    a--;
	}
	cout<<ans;
	return 0;

}

