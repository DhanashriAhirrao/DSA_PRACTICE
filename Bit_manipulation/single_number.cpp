//Q.136 leetcode

//optimal -> xor
int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
        }
        return xor1;
    }

//brute force -> counting
for(int i=0;i<n;i++){
  int cnt=0;
  int number=nums[i];
  for(int j=0;j<n;j++){
    if(number==nums[j]){cnt++};
  }
  if(cnt==1) return number;
}
}


//better -> hashing
unorderded_map<int,int>mp;
//calculating element frequency
for(int i=0;i<n;i++){
    mp[nums[i]]++;    
}
//iterating through freuqency map
for(auto i:mp){
        if(i.second==1){
                cout<<"number that appear once : "<<i.second;
        }
}
