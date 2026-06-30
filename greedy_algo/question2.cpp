// gfg : minimum rotation to unlock circular lock
class Solution {
  public:
    int rotationCount(int r, int d) {
        // code here
        int ans=0;
        while(r>0 || d>0){
            int a=r%10;
            int b=d%10;
            int diff=abs(a-b);
            int diff2=10-diff;
            ans+=min(diff,diff2);
            r/=10;
            d/=10;
        }
        return ans;
    }
};

//leetcode : assign cookies
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int a=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt=0;
        int j=0;
        int i=0;
        while(i<a && j<n){
            if(s[i]>=g[j]){
                cnt++;
                j++;
            }
            i++;
        }
        return cnt;
    }
};
