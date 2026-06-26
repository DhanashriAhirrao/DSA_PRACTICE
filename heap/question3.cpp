//gfg -> kth smallest
// approach 2 : to find smallest we need max heap 
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // approach 1 : 
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int x : arr){
            pq.push(x);
        }
        int a;
        while(k){
            a=pq.top();
            pq.pop();
            k--;
        }
        return a;
        
        //approach 2 : 
        
        priority_queue<int>pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<arr.size();i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};



// leetcode -> kth largest element in array
//approach 2 : to find kth largest we need min heap

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //approach 1 : 

        priority_queue<int>pq;
        for(int x : nums){
            pq.push(x);
        }
        int a;
        while(k){
            a=pq.top();
            pq.pop();
            k--;
        }
        return a;

        //approach 2:     
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        for(int i=k;i<nums.size();i++){
            if(pq.top()<nums[i]){
                pq.pop(); 
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};


//gfg -> kth largest in stream

class Solution {
  public:
    vector<int> kthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>ans;
        for(int x : arr){
            pq.push(x);
            if(pq.size()>k){
                pq.pop();
                
            }
            if(pq.size()<k){
                ans.push_back(-1);
                
            }
            else{
                ans.push_back(pq.top());
                
            }
        }
            return ans;
    }
};
