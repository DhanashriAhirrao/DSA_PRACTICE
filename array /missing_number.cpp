//leetcode Q.268)
int missingNumber(vector<int>& nums) {
  //way 1
  
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int sum1=0;
        for(int i=1;i<=n;i++){
            sum1+=i;
        }
        int ans= (sum1-sum);
        return ans;



 //way 2 
        // int n=nums.size();
        // int xor1=0;
        // int xor2=0;
        // for(int i=0;i<n;i++){
        //     xor1=xor1^nums[i];
        // }
        // for(int i=1;i<=n;i++){
        //     xor2=xor2^i;
        // }
        // return xor1^xor2;
    }
