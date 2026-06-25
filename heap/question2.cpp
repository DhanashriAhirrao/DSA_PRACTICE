//interviewbit -- Profit Maximisation
int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
    for(int x : A){
        pq.push(x);
    }
    int ans=0;
    while(B){
        int a=pq.top();
        pq.pop();
        ans+=a;
        a-=1;
        pq.push(a);
        B-=1;
    }
    return ans;
}

//leetcode -- gift from richest pile
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int x : gifts){
            pq.push(x);
        }
        long long sm=0;
        while(k){
            int a=pq.top();
            pq.pop();
            int b=sqrt(a);
            pq.push(b);
            k-=1;
        }
        while(!pq.empty()){
            sm+=pq.top();
            pq.pop();
        }
        return sm;
    }
};
