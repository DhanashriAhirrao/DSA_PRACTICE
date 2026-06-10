//Q.1 -> factorial
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

//Q.2 -> sum of n natural numbers
#include <bits/stdc++.h>
using namespace std;
int sm(int n){
    if(n==0){
        return 0;
    }
    return n+sm(n-1);
}

int main() {
	int n;
	cout<<"n : ";
	cin>>n;
	cout<<sm(n);

}

//Q.3 -> power if 2
#include <bits/stdc++.h>
using namespace std;
int pw(int n){
    if(n==0){
        return 1;
    }
    return 2*pw(n-1);
}

int main() {
	int n;
	cout<<"n : ";
	cin>>n;
	cout<<pw(n);

}

//Q.4 -> sum of square of n number 
#include <bits/stdc++.h>
using namespace std;
int sqr(int n){
    if(n==1){
        return 1;
    }
    return (n*n)+sqr(n-1);
}

int main() {
	int n;
	cout<<"n : ";
	cin>>n;
	cout<<sqr(n);

}
