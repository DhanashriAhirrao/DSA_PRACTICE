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

