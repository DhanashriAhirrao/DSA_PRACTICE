//leetcode - Q.4)
given 2 vector
vector<int>v1;
vector<int>v2;
code:
int n=v1.size();
int m=v2.size();
vector<int>v3;
int i=0;
int j=0;
while(i<n && j<m){
 if(v1[i]<v2[j]){
     v3.push_back(v1[i]);
     i++;
}
else{
     v3.push_back(v2[j]);
     j++;
}
}
while(i<n){
     v3.push_back(v1[i]);
     i++;
}
while(j<m){
    v3.push_back(v2[j]);
    j++;
}
int k=n+m;
if(k%2==0) return (v3[k/2]+v3[(k/2)-1])/2.0;
else return v3[k/2];
