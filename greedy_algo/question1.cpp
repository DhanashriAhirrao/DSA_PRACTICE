// gfg : minimum number of coins
//approach 1 : 
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int arr[]={2000,1000,500,100,50,20,10,5,2,1};
	int n=143;
	int coin=0;
	while(n>0){
	    for(int i=0;i<10;i++){
	        if(n>=arr[i]){
	            coin+=1;
	            n-=arr[i];
	            break; 
	        }
	    }	    
	}
	cout<<coin;
	return 0;
}

//approach 2 :
class Solution {
  public:
    int findMin(int n) {
        // code here
        int arr[]={1,2,5,10};
        int coin=0;
        int i=sizeof(arr)/sizeof(arr[0])-1;
        while(n && i>=0){
            coin+=(n/arr[i]);
            n%=arr[i];
            i--;
        }
        return coin;
    }
};

//gfg : shop in candy store

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int min_amt=0;
        int max_amt=0;
        int i=0;
        int j=prices.size()-1;
        while(i<=j){
            min_amt+=prices[i];
            i+=1;
            j-=k;
        }
        i=0;
        j=prices.size()-1;
        while(j>=i){
            max_amt+=prices[j];
            j-=1;
            i+=k;
        }
        vector<int>ans;
        ans.push_back(min_amt);
        ans.push_back(max_amt);
        return ans;
    }
};

// gf : assign mice holes
class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int n=mices.size();
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        int ans=INT_MIN;
        int diff;
      // can also this if-else statement her with stl library 'abs'
        for(int i=0;i<n;i++){
            if(mices[i]>=holes[i]){
                diff=mices[i]-holes[i];
            }
            else{
                diff=holes[i]-mices[i];
            }
            ans=max(ans,diff);
        }
        return ans;
    }
};

