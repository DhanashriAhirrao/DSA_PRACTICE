//  Q.1  previous of given number
#include <iostream>
#include <string>
using namespace std;
int main() {
    // Write C++ code here
    string str="101000"; // this is 40 output will be 39
    string ans="";
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='1'){
            str[i]='0';
            for(int j=i+1;j<str.size();j++){
                str[j]='1';
            }
            break;
        }
        
    }
    cout<<str;
    return 0;
}

