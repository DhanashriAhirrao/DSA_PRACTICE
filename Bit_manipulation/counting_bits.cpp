//Q.338 leetcode
//better  
vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int cnt=0;
            int num=i;
            while(num){
                int ans=num%2;//instead use ans=num&1
                if(ans==1){
                    cnt++;
                }
                num=num>>1;
            }
            ans.push_back(cnt);
        }
        return ans;   
}

//optimal
