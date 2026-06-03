//better
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int cnt=0;
        while(n){
            cnt+=(n&1);
            n=n>>1;
        }
        if(cnt==1) return true;
        else return false;
    }

//optimal
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n&(n-1))==0;
    }
