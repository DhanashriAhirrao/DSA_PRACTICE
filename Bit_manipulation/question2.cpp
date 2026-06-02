//Q.1 if number is odd or not 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n&1){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }

    return 0;
}
//logic for any odd number e.g. -> 13 = 1101 now & it with 1
// 1101 & 0001 = 0001 -> so ans is 1 so the loop will run for odd and not for even 
// -------------------------------------------------------------------------------------//

//Q.2 check if number is power of 2 

//brute force
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    string ans="";
    if(n==0){
        cout<<0;
        return 0;
    }
    while(n>0){
        int rem=n%2;
        ans=char(rem+'0')+ans;
        n/=2;
    }
    cout<<ans<<endl;
    int cnt=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='1') cnt++;
    }
    cout<<cnt<<endl;
    if(cnt==1) cout<<"power of 2";
    else cout<<"not a power of 2";
    return 0;
}

//optimal way
// 10000 ->16
// 01111 ->15
// 16 & 15 -> 00000

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    if((n&(n-1))==0) cout<<"power of 2"; //'==' has higher precedence than '&' thats why used extra bracket
    else cout<<"not a power of 2";
}

//-----------------------------------------------------------------------//

//Q.3 count the number of sets (1)

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    int cnt=0;
    while(n>0){
        if(n%2==1) cnt+=1;
        n/=2;
    }
    if(n==1) cnt+=1;
    cout<<cnt;
    return 0;
}

//optimal way
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n : ";
    cin>>n;
    int cnt=0;
    while(n>0){
        cnt+=n&1; //adding 1 in count
        n=n>>1; //it means divide by 2
    }
    cout<<cnt;
    return 0;
}





