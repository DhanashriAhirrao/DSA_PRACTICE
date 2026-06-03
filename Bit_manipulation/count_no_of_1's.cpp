//Q.191 leetcode

//optimal
int hammingWeight(int n) {
        int cnt=0;
        while(n){
            cnt+=(n&1); // addition only happen if remainder is 1 this is same as n%2==1 then cnt+=1
            n=n>>1;
        }
        return cnt;
    }
